class Solution {
public:
 int maxDistance(vector<vector<int>>& grid) { int n=grid.size(),dis=-1;
     queue<pair<int,int>> q;
     vector<vector<int>> vis=grid;                                        
     for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        if(grid[i][j]==1) q.push({i,j}); 
     }    
     }
      if(q.empty() || q.size()==n*n) return -1;
      
      int dx[4]={0,0,1,-1};
      int dy[4]={1,-1,0,0};                                       
      while(!q.empty()){
          int size = q.size();
      while(size--){
          int i=q.front().first;
          int j=q.front().second;
          q.pop();
      for(int k=0;k<4;k++){
           int x=i+dx[k];
           int y=j+dy[k];
          if(x>=0 && x<n && y>=0 && y<n && vis[x][y]==0){
              vis[x][y]=1;
              q.push({x,y});
          }
        }   
      }
       dis++;
      }                                       
      return dis;     
    }
};