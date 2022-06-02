class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int dp[5001] = {};
        dp[0] = 1;
        for (int i = 0; i < coins.size(); i++) {
            for (int j = 1; j <= amount; j++) {
                if (j >= coins[i]) {
                    dp[j] = dp[j] + dp[j - coins[i]];
                }
            }
        }
        return dp[amount];
    }
};
