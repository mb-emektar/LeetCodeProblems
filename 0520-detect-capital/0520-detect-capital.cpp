class Solution {
public:
    bool detectCapitalUse(string word) {
        int i = 1;
        while(i<word.length()){
            
            if(  (isupper(word[1]) != isupper(word[i])) || (islower(word[0]) && isupper(word[i])) ) return false;
            
            i++;
        }
        return true;
    }
};