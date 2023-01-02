class Solution {
public:
    bool detectCapitalUse(string word) {
        for(int i=1;i<word.length();i++){
           if(isupper(word[i-1]) && islower(word[i]) && i!=1)
               return false;
            if(islower(word[i-1]) && isupper(word[i]))
               return false;
               
            }
        return true;
    }
};