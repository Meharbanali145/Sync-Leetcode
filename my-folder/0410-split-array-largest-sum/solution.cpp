class Solution {
public:
    bool isPossible(vector<int>& nums, int k,int maxAllowedSum){
	int subArray = 1; 
	int sum = 0;
	
	for(int i=0;i<nums.size();i++){
		if(sum + nums[i] <= maxAllowedSum){
			sum += nums[i];
		}else{
			subArray++;
			sum = nums[i];
		}
	}
	return subArray <= k;
}
int splitArray(vector<int>& nums, int k) {
        if(k > nums.size()){
            return -1;
        }
  
    int sum = 0;
    for(int i=0;i<nums.size();i++){
     
        sum += nums[i];
    }
    int st = *max_element(nums.begin(), nums.end());
    int end = sum;
    int ans = -1;
    while(st <= end){
        int mid = st + (end-st)/2;
		if(isPossible(nums,k,mid)){
			ans = mid;
			end = mid-1;
		}else{
			st = mid+1;
		}
    }
	return ans;
}
};
