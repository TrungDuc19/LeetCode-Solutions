class Solution {
public:
    int dp[101] = {0};
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int len = nums.size();
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < len; i++) {
            dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
        }
        return dp[len-1];
    }
};
