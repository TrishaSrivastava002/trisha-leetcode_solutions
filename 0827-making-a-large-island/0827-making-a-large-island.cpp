class Solution {
    public:
int dfs(vector<vector<int>>& grid,int i,int j,int &color,int r,int c){
    if(i<0 || j<0 || i>=r || j>=c) return 0;
    if(grid[i][j]==0 || grid[i][j]==color) return 0;
    grid[i][j]=color;
    
    int count=1;
    count+=dfs(grid,i+1,j,color,r,c);
    count+=dfs(grid,i-1,j,color,r,c);
    count+=dfs(grid,i,j+1,color,r,c);
    count+=dfs(grid,i,j-1,color,r,c);
    return count;
}
int largestIsland(vector<vector<int>>& grid){
        unordered_map<int,int> m;
    int color=2,r=grid.size(),c=grid[0].size();
       for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
          if(grid[i][j]==1){
              int count=dfs(grid,i,j,color,r,c);
              m[color]=count;
              color++;
       } 
       }    
       }
int res=0;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       if(grid[i][j]==0){
            set<int> s;//the grid[i][j] value can range from 2 to any number
        if(i+1<r && grid[i+1][j]!=0)  s.insert(grid[i+1][j]);
        if(i-1>=0 && grid[i-1][j]!=0) s.insert(grid[i-1][j]);
        if(j+1<c && grid[i][j+1]!=0)  s.insert(grid[i][j+1]);
        if(j-1>=0 && grid[i][j-1]!=0) s.insert(grid[i][j-1]);
            
int sum=1;   
    for(auto it:s) sum+=m[it];//a single 0 can connect multiple islands 
        res=max(res,sum);
       } 
       }
       }
        return res==0 ?(r*c):res;
    }
};