class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        ios::sync_with_stdio(false); cin.tie(0);
        int m, l = 0, r = nums.size() - 1;
        while (l <= r) {
            m = (l + r)/2;
            if (nums[m] == target) return m;
            else if (nums[m] > target) r = m - 1;
            else l = m + 1;
        }
        return l;
    }
};
