class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> answer;
        int result = n/2;
        for(int i = 1; i <= n/2; i++){
            answer.push_back(i);
            answer.push_back(-i);
        }

        if(n&1) answer.push_back(0);

        return answer;
    }
};