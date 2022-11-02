class Solution {
bool pal(string &s,int i,int j){
    while(i<j){
        if(s[i++]!=s[j--]) return 0;
    }
    return 1;
}
int solve(string &s,vector<int> &dp,int i){
  int n=s.length(),k=INT_MAX;
  if(i>n-1) return 0;
  if(dp[i]!=-1) return dp[i];
  for(int j=i;j<n;j++){
      if(pal(s,i,j)){
         
        k=min(k,1+solve(s,dp,j+1));  
      }
  }
    return dp[i]=k;
}
public:
    int minCut(string s) {
        int n=s.length();
        if(n==1) return 0;
        vector<int> dp(n,-1);
        return solve(s,dp,0)-1;
    }
};