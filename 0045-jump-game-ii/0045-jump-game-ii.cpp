class Solution {
int solve(vector<int>& nums,vector<int> &dp,int n,int i){
    if(i>=n) return 0;
    if(dp[i]!=-1) return dp[i];
     int sum=1e9;
    for(int j=1;j<=nums[i];j++){
        if(i+j>n) break;
        sum=min(sum,1+solve(nums,dp,n,j+i));
    }
    dp[i]=sum;
    return sum;
}
public:
int jump(vector<int>& nums){
    int n=nums.size();
    vector<int> dp(n,-1);
    return solve(nums,dp,n-1,0);
    }
};