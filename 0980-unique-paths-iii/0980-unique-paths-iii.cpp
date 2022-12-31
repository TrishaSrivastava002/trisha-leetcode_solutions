class Solution {
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
bool valid(vector<vector<int>>& grid,int i,int j){
   int r=grid.size(),c=grid[0].size();
   if(i>=r || i<0 || j<0 || j>=c || grid[i][j]==-1) return 0;
   return 1;
}
int solve(vector<vector<int>>& grid,int i,int j,pair<int,int> d,int zero){
    int r=grid.size(),c=grid[0].size(),k=0;
    if(i==d.first && j==d.second && zero==-1) return 1;
     //visited
    grid[i][j]=-3;
    for(int s=0;s<4;s++){
       int x=i+dx[s];
       int y=j+dy[s];
      if(valid(grid,x,y) && grid[x][y]!=-3)
       k+=solve(grid,x,y,d,zero-1);
    }
    grid[i][j]=0;
    return k;
}
public:
    int uniquePathsIII(vector<vector<int>>& grid) { int k=0;
        int r=grid.size(),c=grid[0].size(),zero=0;                                
         pair<int,int> s,d;                                          
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          if(grid[i][j]==0) zero++;
          if(grid[i][j]==1) s={i,j};
          if(grid[i][j]==2) d={i,j};    
          } 
          }
    return solve(grid,s.first,s.second,d,zero);                                                    }
};