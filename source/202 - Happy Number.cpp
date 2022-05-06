class Solution {
public:
    map<int, bool> used;
    bool isHappy(int n) {
        int tmp = 0;
        while (n != 1) {
            tmp = n;
            n = 0;
            while (tmp) {
                n += pow(tmp % 10, 2);
                tmp /= 10;
            }
            if (used[n]) return false;
            used[n] = true;
        }
        return true;
    }
};
