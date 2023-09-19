class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> dp(numRows);
        for(int i=0;i<numRows;i++){
            dp[i].resize(i+1);
            dp[i][0]=1;//first element
          dp[i][i]=1;  //last element
    for(int j=1;j<i;j++)
        dp[i][j]=dp[i-1][j]+dp[i-1][j-1];    
           
        }
        return dp;
    }
};