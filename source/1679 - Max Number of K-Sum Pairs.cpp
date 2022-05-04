class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        multiset<int> ms(nums.begin(), nums.end());
        int cnt = 0, tmp = 0;
        while (!ms.empty()) {
            tmp = *ms.begin();
            ms.erase(ms.begin());
            auto it = ms.find(k - tmp);
            if (it != ms.end()) {
                cnt++;
                ms.erase(it);
            }
        }
        return cnt;
    }
};
