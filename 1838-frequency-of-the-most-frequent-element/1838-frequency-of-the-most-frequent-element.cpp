class Solution {
public:
 int maxFrequency(vector<int>& nums, int k){
    long long int n=nums.size(),maxi=1,i=0,sum=0;
    sort(nums.begin(),nums.end());
   for(int j=0;j<n;j++){
      sum+=nums[j];
       while((j-i+1)*nums[j]-sum>k) sum-=nums[i++];
       maxi=max(maxi,j-i+1);
   }
     return maxi;
     }
};