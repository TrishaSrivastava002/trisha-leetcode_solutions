class Solution {
   double dp[30][30][105]; 
    int dx[8]={-2,-2,-1,-1,2,2,1,1};
    int dy[8]={1,-1,2,-2,1,-1,2,-2};
double solve(int n, int k,int i,int j){
   if(i>=n || j>=n || i<0 || j<0) return 0;
   if(k<=0) return 1; //means knight has made exactly k moves & is on the chessboard.
   if(dp[i][j][k]!=0) return dp[i][j][k];
   
    double sum=0;
    
    for(int s=0;s<8;s++){
        int x=i+dx[s];
        int y=j+dy[s];
       sum+=solve(n,k-1,x,y);    
    }
    return dp[i][j][k]=sum/8.0;
}
public:
double knightProbability(int n, int k, int row, int column) {
    memset(dp, 0, sizeof(dp));
    return solve(n,k,row,column);
    }
};