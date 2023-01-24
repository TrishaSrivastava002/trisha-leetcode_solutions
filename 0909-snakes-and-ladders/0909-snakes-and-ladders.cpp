class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size(),k=0;
       queue<pair<int,int>> q;
       vector<int> vis(n*n+1,0);
        vis[1]=1;
        q.push({1,0});
        int row,col,cell; 
        while(!q.empty()){
            auto[curr,move] = q.front();
            q.pop();
        for(int i=1;i<=6;++i){
          cell=i+curr;
        if(cell%n==0){
            row=n-(cell/n);
            col=(cell/n)&1?n-1:0;
        }
        else{
           row=n-(cell/n)-1;
           col=(cell/n)&1?n-(cell%n):(cell%n)-1;     
            }
        if(board[row][col]!=-1) cell=board[row][col];
        if(cell==n*n) return move+1;
        if(!vis[cell]){
           q.push({cell,move+1});
           vis[cell]=1;
        }
        }
        }
      return -1;
    }
};