class Solution {
int solve(vector<vector<int>>& grid,vector<vector<int>> &dp,int i,int j){
    int m=grid.size(),n=grid[0].size();
    if(i>=m || j>=n) return 1e8;
    if(i==m-1 && j==n-1) return grid[i][j];
    if(dp[i][j]!=-1) return dp[i][j];

 return dp[i][j]=min({grid[i][j]+solve(grid,dp,i+1,j),grid[i][j]+solve(grid,dp,i,j+1)});
}
public:
    int minPathSum(vector<vector<int>>& grid){
        int m=grid.size(),n=grid[0].size();
       vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(grid,dp,0,0);
    }
};