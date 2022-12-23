class Solution {
int solve(vector<int>& prices,int i,int buy,vector<vector<int>> &dp){  
    int n=prices.size(),profit=0;
if(i>=n) return 0; // due to cooldown i can move to n+1
if(dp[i][buy]!=-1) return dp[i][buy];
    
if(buy) //selling
  profit= max(solve(prices,i+1,0,dp)-prices[i],solve(prices,i+1,1,dp));
     
else //we will always purchase after cooldown 
  profit= max(solve(prices,i+2,1,dp)+prices[i],solve(prices,i+1,0,dp));
    //the result will be a single sequence therefore we save the result in profit for
    //both if and else
    return dp[i][buy]=profit;
}
public:
int maxProfit(vector<int>& prices){
      int n=prices.size();
vector<vector<int>> dp(n+1,vector<int>(2,-1)); // due to cooldown i can move to n+1 
    
    return solve(prices,0,1,dp);  
    }
};

// class Solution {
// public:
// 	int f(int i,int b,vector<int>& p,int n,vector<vector<int>>& dp){
// 		if(i>=n) return 0;
// 		if(dp[i][b]!=-1) return dp[i][b];
// 		int profit;
// 		if(b){
// 			int buy=-p[i]+f(i+1,0,p,n,dp);
// 			int notbuy=f(i+1,1,p,n,dp);
// 			profit=max(buy,notbuy);
// 		}
// 		else{
// 			int sell=p[i]+f(i+2,1,p,n,dp);
// 			int notsell=f(i+1,0,p,n,dp);
// 			profit=max(sell,notsell);
// 		}
// 		return dp[i][b]=profit;
// 	}

// 	int maxProfit(vector<int>& p) {
// 		int n=p.size();
// 		vector<vector<int>> dp(n+1,vector<int>(2,-1));
// 		return f(0,1,p,n,dp);
// 	}
// };