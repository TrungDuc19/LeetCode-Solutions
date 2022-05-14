class Solution {
public:
    stack<char> build(string s)
    {
        stack <char> st;
        for (auto x : s) {
            if (x != '#') {
                st.push(x);
            }
            else if (!st.empty()) st.pop();
        }
        return st;
    }
    bool backspaceCompare(string s, string t)
    {
        stack<char> st1 = build(s);
        stack<char> st2 = build(t);
        while (!st1.empty() && !st2.empty()) {
            if (st1.top() != st2.top()) return false;
            st1.pop();
            st2.pop();
        }
        return (st1.empty() && st2.empty());
    }
};
