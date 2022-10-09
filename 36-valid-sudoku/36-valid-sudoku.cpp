class Solution {
bool solve(vector<vector<char>>& board,int i,int j){
    char curr=board[i][j];
    for(int k=0;k<9;k++){ 
       if(k!=i && curr==board[k][j])  return false;
    }
    for(int k=0;k<9;k++){
       if(k!=j && curr==board[i][k]) return false;
    }
    int p=3*(i/3),q=3*(j/3);//for i=0,1,2 we have to check in only in i<3
    for(int k=p;k<p+3;k++){
    for(int l=q;l<q+3;l++){
       if(k!=i && l!=j && curr==board[k][l]) return false;
     }    
     } 
    return true;
}
public:
bool isValidSudoku(vector<vector<char>>& board){
int m=board.size(),n=board[0].size();
     for(int i=0;i<9;i++){
     for(int j=0;j<9;j++){
       if(board[i][j]!='.' && solve(board,i,j)==false) 
           return false;  
     }    
     }   
    return true;
}
};