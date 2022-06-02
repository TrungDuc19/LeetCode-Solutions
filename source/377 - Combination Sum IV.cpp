class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        unsigned int dp[1001] = {1};
        for (int i = 1; i <= target; i++) {
            for (int num : nums) {
                if (i >= num) {
                    dp[i] = dp[i] + dp[i - num];
                }
            }
        }
        return dp[target];
    }
};
