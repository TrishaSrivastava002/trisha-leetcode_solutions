class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       string temp= s+s;
       return temp.substr(1,temp.size()-2).find(s) != -1;  
    }
};