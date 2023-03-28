class Solution {
 public:
 int solve(vector<int>& days, vector<int>& costs,vector<int> &dp,int i){
    if(i>=days.size()) return 0;
    if(dp[i]!=-1) return dp[i];
     
    int d1=upper_bound(days.begin(),days.end(),days[i])-days.begin();
    int ans1=costs[0]+solve(days,costs,dp,d1);
     
    int d2=upper_bound(days.begin(),days.end(),days[i]+6)-days.begin();
    int ans7=costs[1]+solve(days,costs,dp,d2);
     
    int d3=upper_bound(days.begin(),days.end(),days[i]+29)-days.begin();
    int ans30=costs[2]+solve(days,costs,dp,d3);
     
    return dp[i]=min({ans1,ans7,ans30});
 }

 int mincostTickets(vector<int>& days,vector<int>& costs){
        int n=days.size();
        vector<int> dp(n+1,-1);
        return solve(days,costs,dp,0);
    }
};