class Solution {
public:
    int subtractProductAndSum(int n) {
        ios::sync_with_stdio(false); cin.tie(0);
        int mutil = 1, sum = 0;
        while (n) {
            mutil *= n % 10;
            sum += n % 10;
            n /= 10;
        }
        return mutil - sum;
    }
};
