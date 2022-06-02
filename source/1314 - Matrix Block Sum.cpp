class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int max_row = mat.size(), max_col = mat[0].size();
        vector<vector<int>> pre_sum(max_row+1, vector<int>(max_col+1, 0));
        for (int i = 1; i <= max_row; i++) {
            for (int j = 1; j <= max_col; j++) {
                pre_sum[i][j] = mat[i-1][j-1] + pre_sum[i-1][j] + pre_sum[i][j-1] - pre_sum[i-1][j-1];
            }
        }
        int start_i, end_i, start_j, end_j;
        for (int i = 1; i <= max_row; i++) {
            for (int j = 1; j <= max_col; j++) {
                start_i = max(0, i - k - 1);
                end_i = min(max_row, i + k);
                start_j = max(0, j - k - 1);
                end_j = min(max_col, j + k);
                mat[i-1][j-1] = pre_sum[end_i][end_j] - pre_sum[end_i][start_j] - pre_sum[start_i][end_j] + pre_sum[start_i][start_j];
            }
        }
        return mat;
    }
};
