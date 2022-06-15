class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (mat.size() * mat[0].size() != r * c) return mat;
        vector<vector<int>> res(r, vector<int>(c, 0));
        int row = 0, col = 0;
        for (vector<int> vt : mat) {
            for (int val : vt) {
                if (col == c) {
                    row++;
                    col = 0;
                }
                res[row][col] = val;
                col++;
            }
        }
        return res;
    }
};
