class Solution {
public:
    int longestValidParentheses(string s){
       int n=s.length(),o=0,c=0,ans=0,j=0;
       for(int i=0;i<n;i++){
           if(s[i]=='(') o++;
           else c++;
           if(c>o) c=o=0;
           if(o==c) ans=max(ans,2*c);
       }
        c=o=0;
       for(int i=n-1;i>=0;i--){
           if(s[i]==')') c++;
           else o++;
           if(o>c) c=o=0;
           if(o==c) ans=max(ans,2*c);
       }
        return ans;
    }
};