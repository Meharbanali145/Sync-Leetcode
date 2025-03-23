class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
sort(nums.begin(),nums.end());
int left = 0, right = 1;
while(left < nums.size() - 1 and right < nums.size())
{
if(nums[left] == nums[right]) return true;
left++;
right++;
}
return false;
}
};
