class Solution {
public:
    string removeDigit(string number, char digit) {
        string answer = "000";
        for(int i = 0; i < number.size(); i++){
            if(number[i] == digit){
                string current = number.substr(0, i);
                current += number.substr(i+1, number.size());
                answer = max(answer, current);
            }
        }
        return answer;
    }
};