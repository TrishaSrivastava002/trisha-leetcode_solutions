class Solution {
bool check(vector<vector<char>>& board,int i,int j,int k){
   for(int l=0;l<9;l++){
        if(board[i][l]==k) return false;
        if(board[l][j]==k) return false;
        if(board[3*(i/3)+l/3][3*(j/3)+l%3]==k) return false;
    }
    return true;
}
bool solve(vector<vector<char>>& board){
    for(int i=0;i<board.size();i++){
    for(int j=0;j<board[0].size();j++){
       if(board[i][j]=='.'){
    for(char k='1';k<='9';k++){
        if(check(board,i,j,k)){
          board[i][j]=k;
        if(solve(board)) return true;
        else board[i][j]='.';  
    }
    }      
      return false;
    } 
    }    
    }
    return true;
}
public:
    void solveSudoku(vector<vector<char>>& board){
       solve(board); 
    }
};