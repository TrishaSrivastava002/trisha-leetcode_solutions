class Solution {
public:
    string orderlyQueue(string s, int k) {
      if(k==1){
          string p=s;
        for(int i=0;i<s.length();i++){
           s=s.substr(1,s.length()-1)+s[0];
            p=min(s,p);
          }
          return p;
      }
        else sort(s.begin(),s.end());
        return s;
    }
};