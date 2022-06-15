class NumArray {
private:
    vector<int> prefix{0};
public:
    NumArray(vector<int>& nums) {
        for (int num : nums) {
            prefix.push_back(num + prefix.back());
        }
    }
    int sumRange(int left, int right) {
        return prefix[right+1] - prefix[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
