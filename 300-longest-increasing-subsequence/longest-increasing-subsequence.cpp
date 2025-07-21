class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        for(int i = 0; i < nums.size(); i++){
            auto it = lower_bound(lis.begin(), lis.end(), nums[i]);
            if(it == lis.end()) lis.emplace_back(nums[i]);
            else *it = nums[i];
        }

        return lis.size();
    }
};