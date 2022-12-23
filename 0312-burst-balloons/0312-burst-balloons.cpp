class Solution {
int solve(vector<int>& nums,int s,int e,vector<vector<int>> &dp){
    int maxi=INT_MIN;
    if(s>e) return 0;
   if(s==e) return nums[s-1]*nums[s]*nums[s+1];
   if(dp[s][e]!=-1) return dp[s][e];
    for(int k=s;k<=e;k++)
maxi=max(maxi,solve(nums,s,k-1,dp)+nums[s-1]*nums[k]*nums[e+1]+solve(nums,k+1,e,dp));  
    
   return dp[s][e]=maxi; 
}
public:
    int maxCoins(vector<int>& nums) {
       int n=nums.size();
    vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        return solve(nums,1,n,dp);
    }
};