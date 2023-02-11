class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
      int dx[8]={0,0,1,-1,1,-1,-1,1};
      int dy[8]={1,-1,0,0,1,-1,1,-1};
      int m=board.size(),n=board[0].size();
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        int sum=0;
    for(int k=0;k<8;k++){
      int x=i+dx[k];
      int y=j+dy[k];
     if(x>=0 && x<m && y>=0 && y<n){
         if(board[x][y]==1 || board[x][y]==2) sum++;
     }    
    }
        if((sum<2 || sum>3) && board[i][j]==1) board[i][j]=2;
    //not marking 0 as all the states will be updated at the same time so at that tiem it will be 1 
        if(sum==3 && (board[i][j]==0)) board[i][j]=3;
//not marking 1 as all the states will be updated at the same time so at that tiem it will be 0
    }    
    }
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
          board[i][j]%=2;     
       }
    } 
    }
};