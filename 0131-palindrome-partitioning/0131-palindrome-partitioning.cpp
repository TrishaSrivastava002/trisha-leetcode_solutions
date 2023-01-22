class Solution {
vector<vector<string>> v;
bool palindrome(string s, int i,int j){
while(i<=j){
        if(s[i++]!=s[j--]) return 0;
   }
    return 1;
}
 void solve(string &s,int i,vector<string> &k){  
if(i==s.length()){
   v.push_back(k);
       return ;
    }
for(int j=i;j<s.length();j++){
if(palindrome(s,i,j)){
  k.push_back(s.substr(i,j-i+1));//substr uses (index,length) so j-i+1 is the length
   solve(s,j+1,k);
  k.pop_back();
}
}
} 
public: 
vector<vector<string>> partition(string s){
  if(s.length()==1) return {{s}};
  vector<string> k;
     solve(s,0,k);
    return v;
  }
};