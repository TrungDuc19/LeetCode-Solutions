class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int m, l = 0, r = letters.size() - 1, ind = 0;
        while (l <= r) {
            m = l + (r - l)/2;
            if (letters[m] > target) {
                ind = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        return letters[ind];
    }
};
