class Solution {
int solve(vector<vector<char>>& grid,int i,int j,vector<vector<int>> &dp){
    int m=grid.size();
    int n=grid[0].size();
    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]=='0') return 0;
    
    if(dp[i][j]!= -1) return dp[i][j];
    
//to reduce traversing this element again we are changing the value of it from 1 to 0
        grid[i][j]='0';
  
  return dp[i][j] = 1+solve(grid,i+1,j,dp)+solve(grid,i-1,j,dp)+solve(grid,i,j-1,dp)+solve(grid,i,j+1,dp);
}
public:
    int numIslands(vector<vector<char>>& grid){
        int m=grid.size();
        int n=grid[0].size(),len=0;
       vector<vector<int>> dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
             if(grid[i][j]=='1'){
               if(solve(grid,i,j,dp)>=1)
                len++;  
             }
            
         }  
        }
        return len;
    }
};