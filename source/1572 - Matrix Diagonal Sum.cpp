class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sz = mat.size(), sum = 0;
        for (int i = 0; i < sz; i++) {
            sum += mat[i][i] + mat[sz-1-i][i];;
        }
        if (sz & 1) return sum - mat[sz/2][sz/2];
        return sum;
    }
};
