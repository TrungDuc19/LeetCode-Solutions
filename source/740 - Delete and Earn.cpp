class Solution {
public:
    int n = 10001;
    int dp[10001] = {}, freq[10001] = {};
    int deleteAndEarn(vector<int>& nums) {
        for (int num : nums) {
            freq[num]++;
        }
        dp[1] = freq[1];
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + i * freq[i]);
        }
        return dp[n-1];
    }
};
