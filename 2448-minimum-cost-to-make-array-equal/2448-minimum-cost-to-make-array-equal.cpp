#define ll long long
class Solution {
public:
     ll isPossible(vector<int>& nums, vector<int>& cost, int FinalValue, int n){
         ll cnt = 0;
         for(int i = 0; i<n ;i++){
             cnt  += abs(nums[i]-FinalValue)*1LL*cost[i];
         }
         return cnt;
     }
    long long minCost(vector<int>& nums, vector<int>& cost) {
         ll start = *min_element(nums.begin(), nums.end());
         ll end = *max_element(nums.begin(), nums.end());
         int n = nums.size();
         ll ans = 0;
         while(start < end){
             ll mid = start+(end-start)/2;
             ll first = isPossible(nums,cost, mid, n);
             ll second = isPossible(nums, cost, mid+1, n);
             if(first < second){
                 ans = first;
                 end = mid;
             }
             else{
                 ans = second;
                 start = mid+1;
             }
         }
      return ans;
    }
};