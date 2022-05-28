class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int max_row = obstacleGrid.size(), max_col = obstacleGrid[0].size();
        int dp[101][101] = {};
        for (int row = 0; row < max_row; row++) {
            if (obstacleGrid[row][0]) break;
            else dp[row][0] = 1;
        }
        for (int col = 0; col < max_col; col++) {
            if (obstacleGrid[0][col]) break;
            else dp[0][col] = 1;
        }
        for (int row = 1; row < max_row; row++) {
            for (int col = 1; col < max_col; col++) {
                if (obstacleGrid[row][col]) continue;
                else dp[row][col] = dp[row-1][col] + dp[row][col-1];
            }
        }
        return dp[max_row-1][max_col-1];
    }
};
