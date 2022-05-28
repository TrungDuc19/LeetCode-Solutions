class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int len = triangle.size();
        for (int i = 1; i < len; i++) {
            for (int j = 0; j < triangle[i].size(); j++) {
                if (j == 0) triangle[i][j] += triangle[i-1][j];
                else if (j == triangle[i].size()-1) triangle[i][j] += triangle[i-1][j-1];
                else triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
            }
        }
        int res = triangle[len-1][0];
        for (int j = 1; j < triangle[len-1].size(); j++) {
            res = min(res, triangle[len-1][j]);
        }
        return res;
    }
};
