class Solution {
vector<pair<int,char>> say(string s){
vector<pair<int,char>> v;   
    int c=1;
for(int i=0;i<s.length();i++){
    if(s[i]==s[i+1]) c++;
    else{
     v.push_back({c,s[i]}); 
     c=1;
    }
 }   
return v;
 }
string count(vector<pair<int,char>> v){
    string st="";
   for(auto it:v){
       st+=to_string(it.first);
       st+=it.second;
   }
  return st;
}
public:
string countAndSay(int n){
    if(n==1) return "1";
    string s="1";
    for(int i=1;i<n;i++){
       s=count(say(s));
    }
    
      return s;
    }
};