class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = -1e4, actual = -1e4;
        for(int i = 0; i < nums.size(); i++){
            actual = max(actual+nums[i], nums[i]);
            maxi = max(actual, maxi);
        }
        return maxi;
    }
};
 