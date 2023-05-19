class Solution{
int solve(string &s1,string &s2,string &s3,vector<vector<vector<int>>> &dp,int i,int j,int k){
  int n1=s1.length(),n2=s2.length(),n3=s3.length();
  if(i==n1 && j==n2 && k==n3) return 1;
  if(k==n3) return 0;
  if(dp[i][j][k]!=-1) return dp[i][j][k];
  int a=0;
  if(i<n1 && s3[k]==s1[i]) a=solve(s1,s2,s3,dp,i+1,j,k+1);
  int b=0;
  if(j<n2 && s3[k]==s2[j]) b=solve(s1,s2,s3,dp,i,j+1,k+1);
  
  return dp[i][j][k]=a||b;
}
public:
bool isInterleave(string s1, string s2, string s3){
 int n1=s1.length(),n2=s2.length(),n3=s3.length();
 if(n1+n2!=n3) return false;
 vector<vector<vector<int>>> dp(n1+1,vector<vector<int>>(n2+1,vector<int>(n3+1,-1)));
 return solve(s1,s2,s3,dp,0,0,0);

}
};