// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int m, l = 0, r = n, res = 0;
        while (l <= r) {
            m = l + (r - l)/2;
            if (isBadVersion(m)) {
                res = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        return res;
    }
};
