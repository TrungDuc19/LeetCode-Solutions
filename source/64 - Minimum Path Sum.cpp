class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int max_row = grid.size(), max_col = grid[0].size();
        for (int row = 1; row < max_row; row++) {
            grid[row][0] += grid[row-1][0];
        }
        for (int col = 1; col < max_col; col++) {
            grid[0][col] += grid[0][col-1];
        }
        for (int row = 1; row < max_row; row++) {
            for (int col = 1; col < max_col; col++) {
                grid[row][col] += min(grid[row-1][col], grid[row][col-1]);
            }
        }
        return grid[max_row-1][max_col-1];
    }
};
