class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
       vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=0;i<strs.size();i++){
                int z=count(strs[i].begin(),strs[i].end(),'0');
                int o=strs[i].size()-z;
            for(int j=m;j>=z;j--){
            for(int k=n;k>=o;k--){
               dp[j][k]=max(dp[j][k],1+dp[j-z][k-o]); 
            }    
            }
        }
      return dp[m][n];
    }
};