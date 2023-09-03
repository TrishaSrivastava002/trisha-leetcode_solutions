class Solution {
int solve(vector<vector<int>> &dp,int i,int j){  int up,left;
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    
      up=solve(dp,i-1,j);  
      left=solve(dp,i,j-1);
    return dp[i][j]=up+left;
    }
public:
    int uniquePaths(int m, int n){
       vector<vector<int>> dp(m,vector<int>(n,-1));
       return solve(dp,m-1,n-1);
    }
};
