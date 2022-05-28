class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int len = matrix.size();
        for (int i = 1; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (j == 0) matrix[i][j] += min(matrix[i-1][j], matrix[i-1][j+1]);
                else if (j == len-1) matrix[i][j] += min(matrix[i-1][j], matrix[i-1][j-1]);
                else matrix[i][j] += min(matrix[i-1][j], min(matrix[i-1][j-1], matrix[i-1][j+1]));
            }
        }
        int max_value = matrix[len-1][0];
        for (int j = 1; j < len; j++) {
            max_value = min(max_value, matrix[len-1][j]);
        }
        return max_value;
    }
};
