class Solution {
public:
    int numDecodings(string s) {
        if (s.size() == 0 || s[0] == '0') return 0;
        if (s.size() == 1) return 1;
        int dp[101] = {}, len = s.size(), pre, prepre;
        dp[0] = 1, dp[1] = 1;
        for (int i = 1; i < len; i++) {
            pre = s[i] - '0';
            prepre = (s[i-1] - '0')*10 + pre;
            if (pre > 0) dp[i+1] += dp[i];
            if (prepre >= 10 && prepre <= 26) dp[i+1] += dp[i-1];
        }
        return dp[len];
    }
};
