class Solution {
    int solve(vector<int>& prices,int i,int buy,int fee,vector<vector<int>> &dp){
    int n=prices.size();
    long profit=0;
    if(i==n) return 0;
    if(dp[i][buy]!=-1) return dp[i][buy];
    
    if(buy) //selling
    profit= max(solve(prices,i+1,0,fee,dp)-prices[i]-fee,solve(prices,i+1,1,fee,dp));
    else //buying
    profit= max(solve(prices,i+1,1,fee,dp)+prices[i],solve(prices,i+1,0,fee,dp));
    
    return dp[i][buy]=profit;
}
public:
    int maxProfit(vector<int>& prices, int fee) {
      int n=prices.size();
       vector<vector<int>> dp(n,vector<int>(2,-1)); 
    
    return solve(prices,0,1,fee,dp);  
    }
};