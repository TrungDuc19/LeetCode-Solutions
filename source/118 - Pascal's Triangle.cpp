class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res = {{1}};
        for (int i = 1; i < numRows; i++) {
            vector<int> vt = {1};
            for (int j = 1; j <= i; j++) {
                if (j == i) vt.push_back(1);
                else {
                    vt.push_back(res.back()[j-1] + res.back()[j]);
                }
            }
            res.push_back(vt);
        }
        return res;
    }
};
