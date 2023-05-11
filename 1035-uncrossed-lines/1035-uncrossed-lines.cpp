class Solution {
int solve(vector<int> &s1,vector<int> &s2,int i,int j,vector<vector<int>> &dp){
    if(i>=s1.size() || j>=s2.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int max1=0;
    if(s1[i]==s2[j]){
        return 1+solve(s1,s2,i+1,j+1,dp);
    }
    //as we the common integers to be on different indexes  
    return dp[i][j]=max(solve(s1,s2,i+1,j,dp),solve(s1,s2,i,j+1,dp));
    }
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size(),k=0;
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
        
        return solve(nums1,nums2,0,0,dp);
    }
};