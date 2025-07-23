class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum = 0, product = 1;

        vector<int> nums;
        int aux = n;
        while(aux > 0){
            nums.push_back(aux%10);
            aux /= 10;
        }
        reverse(nums.begin(), nums.end());
        for(int x: nums){
            sum += x;
            product *= x;
        }

        if(n % (sum+product) == 0) return true;
        return false;
    }
};