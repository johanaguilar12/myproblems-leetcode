class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;
        for(int i = 0; i < fruits.size(); i++){
            int sepuede = 0;
            for(int j = 0; j < baskets.size();j++){
                if(fruits[i] <= baskets[j]) {
                    sepuede = 1;
                    ans++;
                    baskets.erase(baskets.begin() + j);
                    break;
                }
            }
        }
        return fruits.size()-ans;
    }
};