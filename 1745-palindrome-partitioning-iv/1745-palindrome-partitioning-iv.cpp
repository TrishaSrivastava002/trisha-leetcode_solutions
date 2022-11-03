class Solution {
bool pal(string &s,int i,int j,vector<vector<int>> &dp){
    // while(i<j){
    //     if(s[i++]!=s[j--]) return 0;
    //   }
    // return 1;
    if(i>=j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==s[j]) return dp[i][j]=pal(s,i+1,j-1,dp);
    return dp[i][j]=0;
}
public:
    bool checkPartitioning(string s){
       int n=s.length();
        if(n==1) return 0;
         vector<vector<int>> dp(n,vector<int>(n,-1));
        // return (solve(s,dp,0)-1==3)?0:1; 
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
           if(pal(s,0,i,dp) && pal(s,i+1,j,dp) && pal(s,j+1,n-1,dp)) return 1; 
        }    
        }
        return 0;
    }
};