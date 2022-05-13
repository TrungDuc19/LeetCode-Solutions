class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        int fibo1 = 1, fibo2 = 1, tmp;
        for (int i = 3; i <= n; i++) {
            tmp = fibo2;
            fibo2 += fibo1;
            fibo1 = tmp;
        }
        return fibo2;
    }
};
