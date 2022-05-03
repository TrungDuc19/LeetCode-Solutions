class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int len = arr2.size(), res = 0, ind = 0;
        bool isIt = false;
        for (int x : arr1) {
            ind = lower_bound(arr2.begin(), arr2.end(), x) - arr2.begin();
            isIt = false;
            if (ind < len && abs(arr2[ind] - x) <= d) isIt = true;
            if (ind && abs(arr2[ind-1] - x) <= d) isIt = true;
            if (!isIt) res++;
        }
        return res;
    }
};
