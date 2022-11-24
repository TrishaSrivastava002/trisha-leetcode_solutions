class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),c=-1,mini=INT_MAX;
        if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;
        queue<pair<pair<int,int>,int>> q;
        	vector<vector<int>>vis(n, vector<int>(grid[0].size(), 0));
        q.push({{0,0},1});
        vis[0][0]=1;
        while(!q.empty()){
            int i=q.front().first.first;
            int j=q.front().first.second;
            int sum=q.front().second; //need to push sum in queue so that sum is updated at each matrix index
            q.pop();
            if(i==n-1 && j==n-1){
                mini=min(sum,mini);
                c=1;
            }   
           if(i>0 && grid[i-1][j]==0 && vis[i-1][j]==0){
               vis[i-1][j]=1;
             q.push({{i-1,j}, sum+1});
           }
        if(j>0 && grid[i][j-1]==0 && vis[i][j-1]==0){
               vis[i][j-1]=1;
                q.push({{i,j-1}, sum+1});
            }
        if(j<n-1 && grid[i][j+1]==0 && vis[i][j+1]==0){
               vis[i][j+1]=1;
                q.push({{i,j+1}, sum+1});
            }
        if(i<n-1 && grid[i+1][j]==0 && vis[i+1][j]==0){
                vis[i+1][j]=1;
                q.push({{i+1,j}, sum+1});
            }
        if(i>0 && j>0 && grid[i-1][j-1]==0 && vis[i-1][j-1]==0){
                vis[i-1][j-1]=1;
                q.push({{i-1,j-1},sum+1});
            }
        if(i<n-1 && j<n-1 && grid[i+1][j+1]==0 && vis[i+1][j+1]==0){
                vis[i+1][j+1]=1;
                q.push({{i+1,j+1}, sum+1});
            }
        if(i<n-1 && j>0 && grid[i+1][j-1]==0 && vis[i+1][j-1]==0){
                vis[i+1][j-1]=1;
                q.push({{i+1,j-1}, sum+1});
            }
        if(i>0 && j<n-1 && grid[i-1][j+1]==0 && vis[i-1][j+1]==0){
                vis[i-1][j+1]=1;
                q.push({{i-1,j+1}, sum+1});
            }
        }
        if(c==1) return mini;
        return -1;
    }
};