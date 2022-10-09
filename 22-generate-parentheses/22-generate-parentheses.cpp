class Solution {
void solve(int n,string &s,vector<string> &v,int open,int close){
    if(open==close && open==n){
       v.push_back(s);
        return ;
    }
    if(open<n){
       s.push_back('(');
        solve(n,s,v,open+1,close);
        s.pop_back();
    }
    if(open>close){
        s.push_back(')');
        solve(n,s,v,open,close+1); 
        s.pop_back();
    }   
}
public:
    vector<string> generateParenthesis(int n) {
        string s="";
      vector<string> v;
        solve(n,s,v,0,0);
        return v;
    }
};