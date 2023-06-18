class Solution {
    public:
    int mod = 1e9 + 7;
    int solve(vector<vector<int>>& grid,int i,int j,int path,vector<vector<int>> &dp){ 
        
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]<=path)
        return 0;
    
    if(dp[i][j])
       return dp[i][j];
    
    return dp[i][j]= (1+solve(grid,i+1,j,grid[i][j],dp)+solve(grid,i-1,j,grid[i][j],dp)+solve(grid,i,j+1,grid[i][j],dp)+solve(grid,i,j-1,grid[i][j],dp))%mod;
     
}
    int countPaths(vector<vector<int>>& grid) {
        int m=grid.size(),maxpath=0;
        int n=grid[0].size();
        
       vector<vector<int>> dp(m,vector(n,0));
        
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int val=-1;//for each path val should not be the value from previous path
           maxpath= (maxpath%mod+solve(grid,i,j,val,dp)%mod)%mod;
        }  }
        return maxpath%mod; 
    }
};