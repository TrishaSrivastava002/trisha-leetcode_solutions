class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int res=0,sum=0,n=nums.size();
        vector<int> v(k,0);
        v[0]++;
       for(int i=0;i<n;i++){
           sum=(sum+nums[i]%k+k)%k;
           res+=v[sum];
           v[sum]++;
       }
      return res;
    }
};