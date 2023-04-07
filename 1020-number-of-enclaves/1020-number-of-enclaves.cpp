class Solution {
void solve(vector<vector<int>>& grid,int i,int j){
    int m=grid.size(),n=grid[0].size();
    if(i>m-1 || j>n-1 || i<0 || j<0 || grid[i][j]==0) return ;
    else{
        grid[i][j]=0;
   solve(grid,i+1,j);
   solve(grid,i,j+1);
   solve(grid,i-1,j);
   solve(grid,i,j-1); 
        }  
}
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),res=0;
       vector<vector<int>> dp(m,vector<int>(n,-1));
        
          for(int i=0;i<m;i++){
            if(i==0 || i==m-1){
          for(int j=0;j<n;j++){
                 if(grid[i][j]==1) solve(grid,i,j); 
             }
            }
            else{
               if(grid[i][0]==1)  solve(grid,i,0);
                if(grid[i][n-1]==1) solve(grid,i,n-1);
            }
            }
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(grid[i][j]==1) res++; 
        }    
        }
        return res;
    }
};