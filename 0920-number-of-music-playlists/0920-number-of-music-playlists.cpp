class Solution {
    int mod=1e9+7,res=0;
public:
    long long int solve(int n, int goal, int k,vector<vector<int>> &dp){
        if(n==0 && goal==0) return 1;
        if(n==0 || goal==0) return 0;
        if(dp[n][goal]!=-1) return dp[n][goal];
        long long int pick=solve(n-1,goal-1,k,dp)*n;
        long long int npick=solve(n,goal-1,k,dp)* max(n-k,0);
        return dp[n][goal]=(pick+npick)%mod;
    }
    int numMusicPlaylists(int n, int goal, int k){
       vector<vector<int>> dp(n+1,vector<int>(goal+1,-1));
       return solve(n,goal,k,dp); 
    }
};