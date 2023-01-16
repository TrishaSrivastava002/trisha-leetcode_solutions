class Solution {
    int mod=1e9+7;
    int dp[32][1002];
int solve(int n, int k, int target){ 
    if(target==0 && n==0) return 1;
    if(target<=0 || n<=0) return 0;//bcoz it will return to this condition after it is =0
    if(dp[n][target]!=-1) return dp[n][target];
     int sum=0;
    for(int j=1;j<=k;j++){
      sum=sum%mod+(solve(n-1,k,target-j)%mod)%mod;  
    }
    return dp[n][target]=sum%mod;
}
public:
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(n,k,target);
    }
};