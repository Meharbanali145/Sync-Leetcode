class Solution {
public:
int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int maxProd = INT_MIN;
    int curProd = 1;

    // Left to Right
    for(int i = 0; i < n; i++) {
        curProd *= nums[i];
        maxProd = max(maxProd, curProd);
        if (curProd == 0) curProd = 1;
    }

    curProd = 1;
    // Right to Left
    for(int i = n - 1; i >= 0; i--) {
        curProd *= nums[i];
        maxProd = max(maxProd, curProd);
        if (curProd == 0) curProd = 1;
    }

    return maxProd;
}
};
