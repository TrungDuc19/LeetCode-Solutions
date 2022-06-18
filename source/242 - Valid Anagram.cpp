class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashTable[27] = {};
        for (char ch : s) hashTable[ch - 'a']++;
        for (char ch : t) hashTable[ch - 'a']--;
        for (int val : hashTable) {
            if (val != 0) return false;
        }
        return true;
    }
};
