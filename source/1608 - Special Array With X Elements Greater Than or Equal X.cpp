class Solution {
public:
    int Count(vector<int> vt, int n)
    {
        int cnt = 0;
        for (int val : vt) {
            if (val >= n) cnt++;
        }
        return cnt;
    }
    int specialArray(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int m, l = 0, r = len, tmp = 0;
        while (l <= r) {
            m = l + (r - l)/2;
            tmp = Count(nums, m);
            if (tmp == m) return tmp;
            else if (tmp > m) l = m + 1;
            else r = m - 1;
        }
        return -1;
    }
};
