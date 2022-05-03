class Solution {
public:
    double average(vector<int>& salary) {
        double maxx = 0, minn = 1e9;
        for(int x : salary) {
            if (x > maxx) maxx = x;
            if (x < minn) minn = x;
        }
        double sum = 0, cnt = 0;
        for (int x : salary) {
            if (x == maxx || x == minn) continue;
            sum += x;
            cnt++;
        }
        return sum/cnt;
    }
};
