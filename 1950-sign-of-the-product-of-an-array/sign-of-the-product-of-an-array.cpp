class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool haveZero = false;
        int sign = 1;
        for(int value: nums){
            if(value == 0) {
                haveZero = true;
                break;
            }else if(value < 0){
                sign *= -1;
            }else{
                sign *= 1;
            }
            //cout << sign << " ";
        }
        //cout << endl;
        if(haveZero){
            return 0;
        }

        if(sign > 0) {
            return 1;
        }

        return -1;
    }
};