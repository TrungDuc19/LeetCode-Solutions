class Solution {
public:
    int hammingWeight(uint32_t n) {
        ios::sync_with_stdio(false); cin.tie(0);
        int cnt = 0;
        for (int i = 0; i < 32; i++) {
            cnt += (n&(1<<i))?1:0;
        }
        return cnt;
    }
};
