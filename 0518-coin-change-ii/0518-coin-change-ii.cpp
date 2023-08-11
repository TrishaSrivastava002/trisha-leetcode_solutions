class Solution {
   private:
     vector<vector<int>> dp;
   public: 
int solve(int amount, vector<int>& coins,int j){ int i,sum=0;
    if( i>=coins.size() || amount<0)
        return 0;
    
    if(amount==0)
        return 1;
    
     if(dp[amount][j]!= -1)
         return dp[amount][j];
   
for(i=j;i<coins.size();i++)
    sum+=solve(amount-coins[i],coins,i);

    return dp[amount][j]=sum;
}

    int change(int amount, vector<int>& coins){
        dp.resize(amount+1, vector<int>(301, -1));
       return solve(amount,coins,0);
    }
};
