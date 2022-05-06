class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> st;
        for (char ch : s) {
            if (!st.size() || st.back().first != ch) {
                st.push_back({ch, 1});
            }
            else {
                st.back().second++;
            }
            if (st.back().second == k) {
                st.pop_back();
            }
        }
        string res = "";
        for (auto p : st) {
            res.append(p.second, p.first);
        }
        return res;
    }
};
