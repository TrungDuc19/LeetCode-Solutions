class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int dp[5001] = {}, sum = 0;
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] - nums[i-1] == nums[i-1] - nums[i-2]) {
                dp[i] = dp[i-1] + 1;
                sum += dp[i];
            }
        }
        return sum;
    }
};
