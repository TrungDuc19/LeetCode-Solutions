class Solution {
public:
    int arrangeCoins(int n) {
        long long m, l = 1, r = n, res = 0;
        while (l <= r) {
            m = l + (r - l)/2;
            if (m*(m+1)/2 <= n) {
                res = m;
                l = m + 1;
            }
            else r = m - 1;
        }
        return res;
    }
};
