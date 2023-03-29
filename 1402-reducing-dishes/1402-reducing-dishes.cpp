class Solution {
int solve(vector<int>&sat,vector<vector<int>> &dp,int i,int j){
    if(i==sat.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=max(solve(sat,dp,i+1,j),(sat[i]*j)+solve(sat,dp,i+1,j+1));
}
public:
    int maxSatisfaction(vector<int>& satisfaction){
       int n=satisfaction.size();
       sort(satisfaction.begin(),satisfaction.end());
       vector<vector<int>> dp(n,vector<int>(n+1,-1));
       return solve(satisfaction,dp,0,1);
    }
};