class Solution {
long long int mod=1e9+7;
int solve(int m,int n,int moves,int sr,int sc,vector<vector<vector<int>>>&dp){   
    if(sr<0 || sc<0 || sr>=m || sc>=n) return 1;
     if(moves <= 0) return 0;
    if(dp[sr][sc][moves]!=-1) return dp[sr][sc][moves];
   
       int up=solve(m,n,moves-1,sr+1,sc,dp);
       int down=solve(m,n,moves-1,sr,sc+1,dp);
       int right=solve(m,n,moves-1,sr-1,sc,dp);
       int left=solve(m,n,moves-1,sr,sc-1,dp);
    
return dp[sr][sc][moves]=(up%mod+down%mod+right%mod+left%mod)%mod;
}
public:
int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
   vector<vector<vector<int>>> dp(m+1,vector<vector<int>>(n+1,vector<int>(maxMove+1,-1)));
     return solve(m,n,maxMove,startRow,startColumn,dp)%mod;
    }
};