class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        int tri1 = 0, tri2 = 1, tri3 = 1, tmp = 0;
        for (int i = 3; i <= n; i++) {
            tmp = tri3;
            tri3 += tri2 + tri1;
            tri1 = tri2;
            tri2 = tmp;
        }
        return tri3;
    }
};
