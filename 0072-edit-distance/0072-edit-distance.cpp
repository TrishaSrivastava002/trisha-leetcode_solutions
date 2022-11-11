class Solution {
int solve(string word1, string word2,vector<vector<int>> &dp,int i,int j){
    int sum=0;
    if(i==word1.length()) return word2.length()-j;
    if(j==word2.length()) return word1.length()-i;
    if(dp[i][j]!=-1) return dp[i][j];
    if(word1[i]==word2[j]) sum=0+solve(word1,word2,dp,i+1,j+1);
    else           //insert                       //replace
       sum=min({1+solve(word1,word2,dp,i+1,j),1+solve(word1,word2,dp,i+1,j+
    1),1+solve(word1,word2,dp,i,j+1)});
         //delete
    return dp[i][j]=sum;
    }
public:
 int minDistance(string word1, string word2){
     vector<vector<int>> dp(word1.length()+1,vector<int>(word2.length()+1,-1));
    return solve(word1,word2,dp,0,0);
    }
};