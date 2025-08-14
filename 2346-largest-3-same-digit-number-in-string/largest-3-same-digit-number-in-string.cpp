class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        char prev = num[0];
        int count = 1;
        for(int i = 1; i < num.size(); i++){
            if(num[i] == prev && count < 3){
                count++;
            }else{
                if(count >= 3){
                    if(prev > ans[0]) { ans = prev; ans += prev; ans += prev;}
                }
                count = 1;
            }
            prev = num[i];
        }
        if(count >= 3 && prev > ans[0]) { ans = prev; ans += prev; ans += prev;}
        return ans;
    }
};