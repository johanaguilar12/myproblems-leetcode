class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<string> candidateAnswers;
        for(int i = 0; i < number.size(); i++){
            if(number[i] == digit){
                string current = number.substr(0, i);
                current += number.substr(i+1, number.size());
                cout << current << endl;
                candidateAnswers.push_back(current);
            }
        }
        return *max_element(candidateAnswers.begin(), candidateAnswers.end());
    }
};