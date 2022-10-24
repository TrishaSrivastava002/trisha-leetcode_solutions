class Solution {
bool solve(vector<int>& arr,vector<int> &dp, int s){
  if(s<0 || s>=arr.size()) return 0;
  if(arr[s]==0) return 1;
  if(dp[s]!=-1) return 0;
    dp[s]=0;
  return dp[s]=max(solve(arr,dp,s+arr[s]),solve(arr,dp,s-arr[s]));  
}
public:
  bool canReach(vector<int>& arr, int start){
       vector<int> dp(arr.size()+1,-1);
      return solve(arr,dp,start);
    }
};