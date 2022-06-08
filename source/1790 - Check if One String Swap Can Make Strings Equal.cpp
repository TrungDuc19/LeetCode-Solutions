class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int len = s1.size();
        vector<int> vt;
        for (int i = 0; i < len; i++) {
            if (s1[i] != s2[i]) {
                vt.push_back(i);
            }
        }
        if (vt.size() == 0) return true;
        else if (vt.size() == 2) {
            if (s1[vt[0]] == s2[vt[1]] && s1[vt[1]] == s2[vt[0]]) return true;
            else return false;
        }
        else return false;
    }
};
