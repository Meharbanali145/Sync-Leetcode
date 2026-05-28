class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int s = 0;
        int e = nums.size()-1;
        while(s <= e){
            int mid = s+(e-s)/2;
            if(nums[mid] == tar ){
                return mid;
            }

            if(nums[s] <= nums[mid]){
                if(nums[s] <= tar && tar <= nums[mid]){
                    e = mid-1;
                }else{
                    s = mid+1;
                }
            }else{
                if(nums[mid] <= tar && tar <= nums[e]){
                    s = mid+1;
                }else{
                    e = mid-1;
                }
            }
        }
        return -1;
    }
};
