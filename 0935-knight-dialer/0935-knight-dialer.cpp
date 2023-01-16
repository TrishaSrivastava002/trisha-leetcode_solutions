class Solution{
    long long int mod=1e9+7;
    int dx[8]={-2,-2,-1,-1,2,2,1,1};
    int dy[8]={1,-1,2,-2,1,-1,2,-2};
int solve(int n,vector<vector<vector<long>>> &dp,int i,int j){
    if(i>=4 || i<0 || j<0 || j>=3 || (i==3 && j!=1)) return 0;
                                  //means no cell of i==3 except 1
    if(n==1) return 1;
    if(dp[i][j][n]!=-1) return dp[i][j][n];
    long long sum=0;
    for(int k=0;k<8;k++){
        int x=i+dx[k];
        int y=j+dy[k];
        sum+=solve(n-1,dp,x,y)%mod;
    }
    return dp[i][j][n]=sum%mod;  
 }
public:
 int knightDialer(int n){
  vector<vector<vector<long>>> dp(4,vector<vector<long>>(3,vector<long> (n+1,-1)));
     long long sum=0;
     for(int i=0;i<4;i++){
     for(int j=0;j<3;j++){
        sum=(sum+solve(n,dp,i,j))%mod; 
     }    
     }
     return (int)sum;
    }
};