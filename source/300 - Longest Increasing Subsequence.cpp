class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        vector<int> tracker(2501, 1e9);
        int res = 0;
        tracker[0] = -1e9;
        for (int num : nums) {
            int k = lower_bound(tracker.begin(), tracker.end(), num) - tracker.begin();
            tracker[k] = num;
            res = max(res, k);
        }
        return res;
    }
};
