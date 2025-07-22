class Solution {
public:
    bool isValid(string word) {
        if(word.size() < 3) return false;

        bool valid = true;
        bool vowel = false, consonant = false;
        for(int i = 0; i < word.size(); i++){
            if(!isdigit(word[i]) && !isalpha(word[i])) return false;
            if(isalpha(word[i])) {
                word[i] = tolower(word[i]);
                if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') vowel = true;
                else consonant = true;
            }
        }
        if(consonant && vowel) return true;
        return false;
    }
};