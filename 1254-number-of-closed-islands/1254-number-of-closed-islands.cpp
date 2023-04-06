class Solution {
bool valid(vector<vector<int>>& grid,int i,int j){
    int n=grid.size(),m=grid[0].size(),ans=0;
    if(i<0 || i>=n || j<0 || j>=m) return 0;
    if(grid[i][j]==1 || grid[i][j]==2) return 1;
    grid[i][j]=2;
    bool vxi=valid(grid,i+1,j);
    bool vxd=valid(grid,i-1,j);
    bool vyi=valid(grid,i,j+1);
    bool vyd=valid(grid,i,j-1);
    return vxi&&vxd&&vyi&&vyd;
}
public:
    int closedIsland(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n=grid.size(),m=grid[0].size(),ans=0;
        vector<vector<int>> vis(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(grid[i][j]==0 && valid(grid,i,j)){
             ans++;
           }  
        }    
        }
    return ans;
    }
};