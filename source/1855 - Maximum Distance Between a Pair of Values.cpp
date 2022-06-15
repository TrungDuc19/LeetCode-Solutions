class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        int res = 0, i = 0, j = upper_bound(nums2.begin(), nums2.end(), nums1[0], greater<int>()) - nums2.begin() - 1;
        for (int i = 0; i < len1; i++) {
            while (j + 1 < len2 && nums2[j+1] >= nums1[i]) j++;
            res = max(res, j - i);
            if (j == len2) break;
        }
        return res;
    }
};
