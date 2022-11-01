class Solution {
void solve(vector<vector<char>>& board,int i,int j){
  int m=board.size(),n=board[0].size();
  if(i<0 || j<0 || i>=m || j>=n || board[i][j]!='O') return ;
   
    board[i][j]='#';
   solve(board,i+1,j);
   solve(board,i-1,j);
   solve(board,i,j-1);
   solve(board,i,j+1);   
}
public:
void solve(vector<vector<char>>& board){
  int m=board.size(),n=board[0].size();
  
  for(int i=0;i<m;i++){
      if(board[i][0]=='O') solve(board,i,0);
      if(board[i][n-1]=='O') solve(board,i,n-1);
      }
  for(int i=0;i<n;i++){
      if(board[0][i]=='O') solve(board,0,i);
      if(board[m-1][i]=='O') solve(board,m-1,i);
      }
  for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
      if(board[i][j]=='O') board[i][j]='X';
      if(board[i][j]=='#') board[i][j]='O';
      }    
      }
   
    }
};
