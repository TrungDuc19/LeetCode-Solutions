class Solution {
public:
    vector<vector<int>> res;
    void backTrack(vector<int> nums, int ind)
    {
        if (ind == nums.size()) {
            res.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++) {
            if (i != ind && nums[i] == nums[ind]) continue;
            swap(nums[i], nums[ind]);
            backTrack(nums, ind+1);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backTrack(nums, 0);
        return res;
    }
};
