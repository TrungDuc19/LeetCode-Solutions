class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m, l = 0, r = arr.size()-1;
        while (l <= r) {
            m = (l + r)/2;
            if (arr[m] > arr[m+1] && arr[m] > arr[m-1]) return m;
            else if (arr[m] > arr[m+1]) r = m - 1;
            else l = m + 1;
        }
        return m;
    }
};
