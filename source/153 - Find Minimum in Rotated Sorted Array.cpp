class Solution {
public:
    int check(vector<int> nums, int left, int right, int target)
    {
        auto ind = lower_bound(nums.begin() + left, nums.begin() + right, target);
        if (ind != nums.end() && *ind == target) return ind - nums.begin();
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        if (nums[0] <= nums.back()) return check(nums, 0, len, target);
        int m, l = 1, r = nums.size() - 1;
        while (l <= r) {
            m = l + (r - l)/2;
            if (nums[m] > nums[0]) l = m + 1;
            else r = m - 1;
        }
        if (target >= nums[0]) return check(nums, 0, l, target);
        return check(nums, l, len, target);
    }
};
