class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = 1e9, res = 0;
        for (int value : prices) {
            min_value = min(min_value, value);
            res = max(res, value - min_value);
        }
        return res;
    }
};
