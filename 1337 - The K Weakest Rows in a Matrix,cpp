class Solution {
public:
    int numOnes(vector<int> vt)
    {
        int m, l = 0, r = vt.size();
        while (l < r) {
            m = l + (r - l)/2;
            if (vt[m] == 1) {
                l = m + 1;
            }
            else r = m ;
        }
        return l;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> cnt;
        int sum = 0;
        for (int i = 0; i < mat.size(); i++) {
            sum = numOnes(mat[i]);
            cnt.push_back({sum, i});
        }
        sort(cnt.begin(), cnt.end());
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(cnt[i].second);
        }
        return res;
    }
};
