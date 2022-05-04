class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minn = 1e9, ind = -1, tmp = 0;
        for (int i = 0; i < points.size(); i++) {
            if (points[i][0] == x || points[i][1] == y) {
                tmp = abs(points[i][0] - x) + abs(points[i][1] - y);
                if (tmp < minn) {
                    minn = tmp;
                    ind = i;
                }
            }
        }
        return ind;
    }
};
