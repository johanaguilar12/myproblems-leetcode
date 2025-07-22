class Solution {
public:
    int dayOfYear(string date) {
         map<string, int> mp = {
            {"01", 31},
            {"02", 28},
            {"03", 31},
            {"04", 30},
            {"05", 31},
            {"06", 30},
            {"07", 31},
            {"08", 31},
            {"09", 30},
            {"10", 31},
            {"11", 30},
            {"12", 31}
        };

        string year = date.substr(0, 4);
        string month = date.substr(5,2);
        string day = date.substr(8,2);

        int y = 0, m = 0, d = 0;
        for(char c: year){
            y = y * 10 + (c-'0');
        }

        for(char c: month){
            m = m * 10 + (c-'0');
        }

        for(int i = 0; i < day.size(); i++){
            if(i == 0 && day[i] != '0') d = d * 10 + (day[i] - '0');
            else if(i != 0) d = d * 10 + (day[i] - '0');
        }
        

        if(y % 100 == 0) {
            if(y % 400 == 0) mp["02"] += 1;
        }else if(y % 4 == 0) mp["02"] += 1;
        
        int sum = 0;
        for(auto it: mp){
            if(it.first == month) {
                sum += d;
                break;
            }else{
                sum += mp[it.first];
            }
        }
        
        return sum;
    }
};