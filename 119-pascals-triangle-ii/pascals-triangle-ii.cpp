class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res;
        res.push_back({1});
        if(rowIndex < 1) return res[0];
        res.push_back({1,1});
        if(rowIndex < 2) return res[1];

        for(int i = 1; i < rowIndex; i++){
            vector<int> aver;
            aver.push_back(1);
            for(int j = 0; j+1 < res[i].size(); j++){
                aver.push_back(res[i][j] + res[i][j+1]);
            }
            aver.push_back(1);
            res.push_back(aver);
        }
        return res[rowIndex];
    }
};