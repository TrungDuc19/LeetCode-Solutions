class Solution {
public:
    int search(vector<int>& nums, int target) {
        int m, l = 0, r = nums.size();
        while (l < r) {
            m = l + (r - l)/2;
            if (nums[m] == target) return m;
            else if (nums[m] > target) r = m - 1;
            else l = m + 1;
        }
        return -1;
    }
};
