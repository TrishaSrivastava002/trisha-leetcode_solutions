class Solution {
int mod=1e9+7;
int solve(string &s,vector<int> &dp,int i,int k){
       int n=s.length();
       if(i==n) return 1;
       if(dp[i]!=-1) return dp[i];
        long long sum=0,curr=0;
       for(int j=i;j<n;j++){
           int r=(s[j]-'0');
          curr=curr*10+r;
          if(curr<1 || curr>k) break;
           int x=solve(s,dp,j+1,k);
          sum=(sum+x)%mod; 
       }
        return dp[i]=sum;
    }
public:
    int numberOfArrays(string s, int k){
       int n=s.length();
       vector<int> dp(n,-1);
       return solve(s,dp,0,k);
    }
};