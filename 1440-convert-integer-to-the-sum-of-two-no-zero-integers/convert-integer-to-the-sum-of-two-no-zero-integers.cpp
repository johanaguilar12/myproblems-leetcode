class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;

        for(int i = 1; i <= n; i++){
            int one = i, second = n-i;
            string aver = to_string(one), ja = to_string(second);
            bool sepudo = true, sepudo2 = true;
            for(char c: aver) if(c == '0') sepudo = false;
            for(char c: ja) if(c == '0') sepudo2 = false;

            if(sepudo && sepudo2) {
                ans.push_back(one);
                ans.push_back(second);
                break;
            }
        }
        return ans;
    }
};