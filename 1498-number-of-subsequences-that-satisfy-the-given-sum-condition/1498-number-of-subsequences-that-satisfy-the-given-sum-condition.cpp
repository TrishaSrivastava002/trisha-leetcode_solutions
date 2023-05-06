class Solution {
public:
    int mod=1e9+7;
    int numSubseq(vector<int>& nums, int target) {
      int s=0,n=nums.size(),e=n-1;
      sort(nums.begin(),nums.end());
        vector<int> v(n);
        v[0]=1;
      for(int i=1;i<n;i++){
          v[i]=(v[i-1]*2)%mod;
      }
      long long int k=0;
      while(s<=e){
          if(nums[s]+nums[e]<=target){
            k+=v[e-s];
            k%=mod;
            s++;
          } 
          else  e--; 
      }
        return k;
    }
};