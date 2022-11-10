class Solution {
int solve(vector<int>& nums,vector<int> &dp,int target,int i,int sum){
    if(i<0){
    if(sum==target) return 1;
        else return 0;
    } 
    //if(dp[i]!=-1) return dp[i];
    int l=solve(nums,dp,target,i-1,sum+nums[i]);
    int r=solve(nums,dp,target,i-1,sum-nums[i]);
    return l+r;
}
public:
int findTargetSumWays(vector<int>& nums, int target){  
       int sum=0,n=nums.size();
    for(int i=0;i<n;i++) sum+=nums[i];
       if(sum<target) return 0;
    vector<int> dp(nums.size()+1,-1);
  return solve(nums,dp,target,n-1,0);
    }
};