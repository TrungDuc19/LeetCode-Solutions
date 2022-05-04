class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt = 0, l = 0, r = nums.size() - 1;
        while (l < r) {
            if (nums[l] + nums[r] == k) {
                cnt++; l++; r--;
            }
            else if (nums[l] + nums[r] > k) r--;
            else l++;
        }
        return cnt;
    }
};
