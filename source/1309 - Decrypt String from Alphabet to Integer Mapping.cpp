class Solution {
public:
    string freqAlphabets(string s) {
        int len = s.size();
        s = s + '.' + '.';
        string res = "";
        for (int i = 0; i < len; i++) {
            if (s[i+2] != '#') {
                res += char('a' + s[i] - '1');
            }
            else {
                res += char('a' + stoi(s.substr(i, 2)) - 1);
                i += 2;
            }
        }
        return res;
    }
};
