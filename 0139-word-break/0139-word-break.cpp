class Solution {
public:
    int dp[301];
bool solve(string s, set<string> &st,int i){  string t;
    if(i==s.length()) return 1;
    if(dp[i]!=-1) return dp[i];
   
    for(int j=i;j<s.length();j++){
        t+=s[j];
       if(st.find(t)!=st.end()){
           if(solve(s,st,j+1)) return dp[i]=1;
       }     
    }
return dp[i]=0;
}
bool wordBreak(string s, vector<string>& wordDict) {
      int n=wordDict.size(),k=0;
      memset(dp,-1,sizeof(dp));
        set<string> st;
        for(auto i:wordDict) st.insert(i);
        return solve(s,st,0); 
    }
};