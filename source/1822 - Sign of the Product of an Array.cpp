class Solution {
public:
    int arraySign(vector<int>& nums) {
        int tmp = 1;
        for (int x : nums) {
            if (x == 0) return 0;
            if (x < 0) tmp *= -1;
        }
        return tmp;
    }
};
