class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currSum=0;
        int sz = nums.size();
        for(int st = 0;st<sz;st++){
            currSum += nums[st];
            maxSum = max(currSum,maxSum);
             if (currSum < 0){
            currSum = 0;
        }
        }
       
        return maxSum;
    }
};
