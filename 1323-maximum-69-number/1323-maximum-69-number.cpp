class Solution {
public:
    int maximum69Number (int num) { int k=0;
       string s=to_string(num);
       for(int i=0;i<s.length();i++){
           if(s[i]!='9'){
            s[i]='9';
               k++;
               
           }
           if(k==1) break;
       }
         return stoi(s);
    }
};