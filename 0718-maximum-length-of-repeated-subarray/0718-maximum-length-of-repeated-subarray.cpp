class Solution {
int solve(vector<int> &nums1, vector<int> &nums2,vector<vector<int>> &dp,int i,int j,int &k){
    int n1=nums1.size(),n2=nums2.size();
    if(i>=n1 || j>=n2) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int max1=0;
    if(nums1[i]==nums2[j]){
       max1=1+solve(nums1,nums2,dp,i+1,j+1,k); 
    }
    solve(nums1,nums2,dp,i+1,j,k);
    solve(nums1,nums2,dp,i,j+1,k);
    k=max(max1,k);
    return dp[i][j]=max1;
}
public:
    int findLength(vector<int>& nums1, vector<int>& nums2){
        int n1=nums1.size(),n2=nums2.size();
        int k=0;
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
         solve(nums1,nums2,dp,0,0,k);
        return k;
    }
};