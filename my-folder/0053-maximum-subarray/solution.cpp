class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n  = nums.size();
       int maxSum = INT_MIN;
       int curentSum = 0;
       for(int i=0;i<n;i++){
        curentSum += nums[i];
        maxSum = max(curentSum,maxSum);
        if(curentSum < 0){
            curentSum = 0;
        }
       }
       return maxSum;
    }
};
