class Solution {
    int n;
 int solve(vector<pair<int,int>> &v,vector<vector<int>> &dp,int i,int sum){
     if(i==n) return 0;
     if(dp[i][sum]!=-1) return dp[i][sum];
     int sum1;
     if(v[i].second>=sum){
        sum1=v[i].first+solve(v,dp,i+1,v[i].second); 
     }
     else  sum1=0;
     
     int sum2=solve(v,dp,i+1,sum);
     return dp[i][sum]=max(sum1,sum2);
 }
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages){
        n=ages.size();
        int maxi=0;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
          maxi=max(maxi,ages[i]);
            //sorting scores becoz their increasing order is necessary & age can be compared with previous input
          v.push_back({scores[i],ages[i]});
        }
        sort(v.begin(), v.end());
      vector<vector<int>> dp(n,vector<int>(maxi+1,-1));
      return solve(v,dp,0,0);
    }
};