class Solution {
int solve(string &text1, string &text2,vector<vector<int>> &dp,int m,int n){
    if(m<0 || n<0) return 0;
    
    if(dp[m][n]!=-1) return dp[m][n];
    if(text1[m]==text2[n])
        return dp[m][n]=1+solve(text1,text2,dp,m-1,n-1);
   
     //this way order of the subsequence will always be maintained
//if characters are not equal m-1 will move till -1 and then return 0 same is for n-1
   else return dp[m][n]=max(solve(text1,text2,dp,m-1,n),solve(text1,text2,dp,m,n-1));
     
}
public:
    int longestCommonSubsequence(string text1, string text2) {
       vector<vector<int>> dp(text1.length(),vector<int> (text2.length(),-1));
        
        return solve(text1,text2,dp,text1.length()-1,text2.length()-1);
    }
};