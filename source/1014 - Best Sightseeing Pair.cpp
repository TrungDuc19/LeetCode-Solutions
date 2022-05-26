class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int len = values.size();
        int res = 0, max_end = values[len-1] - (len-1);
        for (int i = len-2; i >= 0; i--) {
            max_end = max(max_end, values[i+1] - (i+1));
            res = max(res, values[i] + i + max_end);
        }
        return res;
    }
};
