class Solution {
    int n;
int solve(vector<int>& s,vector<vector<int>> &dp,int i,int sum){
    if(i==n){
        if(sum<0) return 1e8;
        return 0;
    } 
    if(dp[i][sum+3000]!=-1) return dp[i][sum+3000];
    int p=s[i]+solve(s,dp,i+1,s[i]+sum);
    int np=-s[i]+solve(s,dp,i+1,sum-s[i]);
return dp[i][sum+3000]=min(np,p);
}
public:
    int lastStoneWeightII(vector<int>& stones) {
         n=stones.size();
       vector<vector<int>> dp(n,vector<int>(6000,-1));
        return solve(stones,dp,0,0);
    }
};