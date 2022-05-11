// Dynamic Program
class Solution {
public:
    int countVowelStrings(int n) {
        vector<vector<int>>dp(n + 1, vector<int>(6));
        for (int i = 1; i <= 5; i++) {
            dp[1][i] = dp[1][i-1] + 1;
        }
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= 5; j++) {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }   
        return dp[n][5];
    }
};


// Backtrack
class Solution {
public:
    int cnt = 0;
    void backTrack(int cnt_char, int n, int ind)
    {
        if (cnt_char == n) cnt++;
        else {
            for (int i = ind; i < 6; i++) {
                cnt_char++;
                backTrack(cnt_char, n, i);
                cnt_char--;
            }
        }
    }
    int countVowelStrings(int n) {
        backTrack(0, n, 1);
        return cnt;
    }
};
