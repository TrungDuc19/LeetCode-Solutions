class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int max_row = grid.size(), max_col = grid[0].size(), res = 0;
        for (int i = 0; i < grid.size(); i++) {
            int m, l = 0, r = max_col - 1;
            while (l <= r) {
                m = l + (r - l)/2;
                if (grid[i][m] < 0) r = m - 1;
                else l = m + 1;
            }
            res += max_col - l;
        }
        return res;
    }
};
