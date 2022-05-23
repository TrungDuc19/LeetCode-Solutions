class Solution {
public:
    int dp1[101] = {}, dp2[101] = {};
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);
        int len = nums.size();
        dp1[0] = nums[0];
        dp1[1] = max(nums[0], nums[1]);
        for (int i = 2; i < len-1; i++) {
            dp1[i] = max(dp1[i-2] + nums[i], dp1[i-1]);
        }
      
        dp2[1] = nums[1];
        dp2[2] = max(nums[1], nums[2]);
        for (int i = 3; i < len; i++) {
            dp2[i] = max(dp2[i-2] + nums[i], dp2[i-1]);
        }
        return max(dp1[len-2], dp2[len-1]);
    }
};
