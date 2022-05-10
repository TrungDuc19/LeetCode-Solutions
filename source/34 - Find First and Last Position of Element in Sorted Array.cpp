class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int m, l = 0, r = nums.size() - 1;
        int firstIndex = -1, lastIndex = -1;
        while (l <= r) {
            m = l + (r - l)/2;
            if (nums[m] > target) r = m - 1;
            else if (nums[m] < target) l = m + 1;
            else {
                firstIndex = m;
                r = m - 1;
            }
        }
      
        l = 0, r = nums.size() - 1;
        while (l <= r) {
            m = l + (r - l)/2;
            if (nums[m] > target) r = m - 1;
            else if (nums[m] < target) l = m + 1;
            else {
                lastIndex = m;
                l = m + 1;
            }
        }
        return {firstIndex, lastIndex};
    }
};
