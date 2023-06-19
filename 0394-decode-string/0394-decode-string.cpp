class Solution {
int n;
string solve(string &s,int &i){
    string res="";
   while(i<n && s[i]!=']'){
      if(!isdigit(s[i])) res+=s[i++];
      else{
         int k=0;
         while(i<n && isdigit(s[i])){
            k=k*10+(s[i]-'0');
             i++;
          }
          i++;  // '['
          string st=solve(s,i);
          i++;  // ']'
          while(k--) res+=st;
      }
          
   }
    return res;
} 
public:
string decodeString(string s){
     int i=0; 
     n=s.length();
     return solve(s,i);
    }
};