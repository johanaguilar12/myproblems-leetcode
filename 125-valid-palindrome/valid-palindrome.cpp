class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(char&c: s){
            c = tolower(c);
            if(isalpha(c) || isdigit(c)) ans += c;
        }
        bool esPalindromo = true;
        //cout << ans << endl;
        int i = 0, j = ans.size()-1;
        while(i < j){
            if(ans[i] != ans[j]) {
                esPalindromo = false;
                break;
            }
            i++;
            j--;
        }
        //cout << ans << (char)10;
        return esPalindromo;
    }
};