class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> pref(prices.size(), 1e5+5);
        pref[0] = prices[0];
        for(int i = 1; i < prices.size(); i++){
            pref[i] = min(pref[i-1], prices[i]);
        }

        vector<int> suf(prices.size()+1, 0);
        for(int i = prices.size()- 1; i >= 0; i--){
            suf[i] = max(suf[i+1], prices[i]);
        }

        int ans = 0;
        for(int i = 0; i+1 < prices.size(); i++){
            ans = min(ans, pref[i]-suf[i+1]);
        }
        return abs(ans);
    }
};