class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();

    // Moore's Voting Algorithm
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (freq == 0) {
            ans = nums[i];
        }
        if (ans == nums[i]) {   // FIXED here
            freq++;
        } else {
            freq--;
        }
    }

    // Verify majority
    int count = 0;
    for (int val : nums) {
        if (val == ans) {
            count++;
        }
    }

    if (count > n / 2) {
        return ans;
    }
    return -1;
}
};
