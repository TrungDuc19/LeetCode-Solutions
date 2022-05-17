class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios::sync_with_stdio(false); cin.tie(0);
        int sum_max = -1e9, sum_tmp = 0;
        for (int x : nums) {
            sum_tmp += x;
            sum_max = max(sum_max, sum_tmp);
            if (sum_tmp < 0) sum_tmp = 0;
        }
        return sum_max;
    }
};
