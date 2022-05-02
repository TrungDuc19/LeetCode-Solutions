class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        while (start < end) {
            if (!(nums[end] & 1)) {
                swap(nums[start], nums[end]);
                start++;
            }
            else end--;
        }
        return nums;
    }
};
