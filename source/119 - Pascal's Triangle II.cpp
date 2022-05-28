class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1, 0);
        res[0] = 1;
        int current_value, tmp_value;
        for (int i = 1; i <= rowIndex; i++) {
            current_value = 0, tmp_value = 0;
            for (int j = 0; j <= i; j++) {
                current_value = res[j] + tmp_value;
                tmp_value = res[j];
                res[j] = current_value;
            }
        }
        return res;
    }
};
