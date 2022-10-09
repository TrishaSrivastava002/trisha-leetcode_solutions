class Solution {
    int solve(vector<int>& coins, int amount,vector<int> &dp){
        int ans=INT_MAX;
        
        if(amount == 0) return 0;
		if(amount < 0) return -1;
        
		if(!dp[amount]){
    for(int i=0;i<coins.size();i++){
if(solve(coins,amount-coins[i],dp)!=-1) ans=min(ans,solve(coins,amount-coins[i],dp));
            //to repeat an element's subtraction
            if(ans!=INT_MAX) dp[amount]=ans+1;
            else dp[amount]= -1;
        }  
        }
 return dp[amount];  
    }
public:
    int coinChange(vector<int>& coins, int amount){ 
        vector<int> dp(amount+1,0);
        return solve(coins,amount,dp);
    }
};