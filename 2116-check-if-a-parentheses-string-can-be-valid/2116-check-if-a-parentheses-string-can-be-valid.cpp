class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.length(),o=0,c=0;
        if(n%2==1) return 0;
       for(int i=0;i<n;i++){
          if(locked[i]=='0' || s[i]=='(') o++;
          else o--;
          if(o<0) return 0;
       }
        
        o=c=0;
        for(int i=n-1;i>=0;i--){
          if(locked[i]=='0' || s[i]==')') o++;
          else o--; 
          if(o<0) return 0;
        }
        return 1;
    }
};