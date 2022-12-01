class Solution {
public:
    bool halvesAreAlike(string s) {
        int m=0,n=0;
        for(int i=0;i<s.length()/2;i++){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    m++;        
        }
         for(int i=s.length()/2;i<s.length();i++){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    n++;         
        }
        if(m==n)
            return true;
        return false;
    }
};