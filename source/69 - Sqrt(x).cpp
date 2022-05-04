class Solution {
public:
    int mySqrt(int x) {
        long long m, l = 0, r = x, res = 0;
        while (l <= r) {
            m = l + (r - l)/2;
            if (m*m == x) return m;
            if (m*m <= x) {
                res = m;
                l = m + 1;
            }
            else r = m - 1;
        }
        return res;
    }
};
