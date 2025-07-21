class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        if(numRows < 2) return res;
        res.push_back({1,1});
        if(numRows < 3) return res;

        for(int i = 1; i < numRows-1; i++){
            vector<int> aver;
            aver.push_back(1);
            for(int j = 0; j+1 < res[i].size(); j++){
                aver.push_back(res[i][j] + res[i][j+1]);
            }
            aver.push_back(1);
            res.push_back(aver);
        }
        return res;
    }
};