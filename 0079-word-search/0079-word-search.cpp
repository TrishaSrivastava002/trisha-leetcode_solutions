class Solution {
bool solve(vector<vector<char>>& board, string &word,int i,int j,int t){ 
  if(t==word.size()) return true;
    int m=board.size();
    int n=board[0].size(); 
if(i<0 || j<0 || i>m-1 || j>n-1 || board[i][j]=='0' || board[i][j]!=word[t])
    return 0;
  char c=board[i][j];
   board[i][j]='0';
  
bool ans= solve(board,word,i-1,j,t+1) || solve(board,word,i+1,j,t+1) 
     || solve(board,word,i,j-1,t+1) || solve(board,word,i,j+1,t+1);
  
  board[i][j]=c;
  
  return ans;
}
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
         
      for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
      if(solve(board,word,i,j,0))
           return true;  
        }   
        }
    
       return false;
    }
};