class Solution {
public:
    int countBit(int n)
    {
        int cnt = 0;
        while (n) {
            cnt += (n & 1);
            n >>= 1;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int len = arr.size();
        pair<int, int> p[len];
        for (int i = 0; i < len; i++) {
            p[i].second = arr[i];
            p[i].first = countBit(arr[i]);
        }
        sort(p, p+len, [](pair<int, int> a, pair<int, int> b){
            if (a.first == b.first) return a.second < b.second;
            return a.first < b.first;
        });
        vector<int> res;
        for (int i = 0; i < len; i++) {
            res.push_back(p[i].second);
        }
        return res;
    }
};
