class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        sort(coins.begin(), coins.end());
        int dp[10001] = {0};
        for(int i = 1; i <= amount; i++) {
            dp[i] = 1e9;
            for (int coin : coins) {
                if (i < coin) break;
                else {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        return (dp[amount] != 1e9 ? dp[amount] : -1);
    }
};
