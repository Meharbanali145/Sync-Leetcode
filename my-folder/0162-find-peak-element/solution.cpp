class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;

        while(st < end){
            int mid = st + (end - st) / 2;

            if(nums[mid] < nums[mid + 1]){
                // increasing slope
                st = mid + 1;
            } else {
                // decreasing slope
                end = mid;
            }
        }
        return st;
    }
};

