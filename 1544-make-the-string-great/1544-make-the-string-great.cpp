class Solution {
public:
    string makeGood(string s) {
        int i=0;
        while(i<s.length() && s.length()>=1){
            if(s[i]==s[i+1]+32 || s[i]+32==s[i+1]){
                s.erase(s.begin()+i,s.begin()+i+2);
                i=0;
            }
             else
                 i++;
        }
        return s;
    }
};