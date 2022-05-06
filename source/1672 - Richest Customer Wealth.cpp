class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = -1e9, sum = 0;
        for (auto acc : accounts) {
            sum = 0;
            for (int a : acc) {
                sum += a;
            }
            res = max(res, sum);
        }
        return res;
    }
};
