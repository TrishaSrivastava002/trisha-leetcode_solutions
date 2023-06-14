class Solution {
    int row,col,m,n;
    int dp[101][101][4];
public:
    int solve(vector<vector<char>>& maze,int i,int j,int dir){
        if(i<0 || i>=m || j<0 || j>=n || maze[i][j]=='+') return 1e6;
        if((i==0 || i==m-1 || j==0 || j==n-1) && (i!=row || j!=col)) return 0;
        if(dir!=-1 && dp[i][j][dir]!=-1) return dp[i][j][dir];
        maze[i][j]='+';
        int u=1e6, l=1e6, r=1e6, d=1e6;
        r=1+solve(maze,i+1,j,0);
        l=1+solve(maze,i-1,j,1);
        d=1+solve(maze,i,j+1,2);
        u=1+solve(maze,i,j-1,3);
        maze[i][j]='.';
        int x=min(u, d);
        int y=min(r, l);
        if(dir!=-1) dp[i][j][dir]=min(x, y);
        return min(x, y);
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
       m=maze.size(),n=maze[0].size();
       row=entrance[0],col=entrance[1];
       memset(dp, -1, sizeof(dp));
       int k=solve(maze,row,col,-1);
        return k>=1e6?-1:k;
    }
};
