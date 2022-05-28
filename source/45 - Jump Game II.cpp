class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size(), res = 0, farthest = 0, l = 0, r = 0;
        while (r < len-1) {
            farthest = 0;
            for (int i = l; i <= r; i++) {
                farthest = max(farthest, i + nums[i]);
            }
            l = r + 1;
            r = farthest;
            res += 1;
        }
        return res;
    }
};
