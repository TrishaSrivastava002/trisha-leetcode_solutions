class Solution {
int solve(int low, int high, int zero, int one,int i,vector<long long> &dp){
    int mod=1e9+7;
    if(i>=high) return 0;
    if(dp[i]!=-1) return dp[i];
    
    long long z=solve(low,high,zero,one,i+zero,dp);
    if(zero+i>=low && zero+i<=high) z++;
    
    long long o=solve(low,high,zero,one,i+one,dp);
    if(one+i>=low && one+i<=high) o++;
    
    return dp[i]=(o+z)%mod;
}
public:
    int countGoodStrings(int low, int high, int zero, int one){
       vector<long long> dp(1e5+1,-1);
        return solve(low,high,zero,one,0,dp);
    }
};