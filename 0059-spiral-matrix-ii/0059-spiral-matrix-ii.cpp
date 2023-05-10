class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     vector<vector<int>> mat(n, vector<int>(n,0));
        int srow=0,erow=n-1,scol=0,ecol=n-1,count=1,total=n*n+1,j=1;
        while(count<total){
           for(int i=scol;i<=ecol && count<total;i++){
               mat[srow][i]=j++;
               count++;
           } 
            srow++;
            for(int i=srow;i<=erow && count<total;i++){ 
               mat[i][ecol]=j++;
               count++;
           } 
           ecol--;
            for(int i=ecol;i>=scol && count<total;i--){
               mat[erow][i]=j++;
               count++;
           } 
           erow--;
            for(int i=erow;i>=srow && count<total;i--){
               mat[i][scol]=j++;
               count++;
           } 
           scol++; 
        }
       return mat; 
    }
};
