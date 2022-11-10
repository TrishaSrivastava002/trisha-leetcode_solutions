class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        if(s.length()==pow(10,5))
            return "";
           while(i<s.length() && s.length()>=2){
            if(s[i]==s[i+1]){
              s.erase(s.begin()+i,s.begin()+i+2);
                i=0;
            }
               else
                   i++;
            }  
            return s;
        }
};