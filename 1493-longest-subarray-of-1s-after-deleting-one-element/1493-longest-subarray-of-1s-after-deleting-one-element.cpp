class Solution {
public:
int longestSubarray(vector<int>& nums) {
  int z=0,n=nums.size(),sum=0,res=INT_MIN,j=0;
    for(int i=0;i<n;i++){
            sum+=nums[i];
        if(nums[i]==0) z++;
        while(z>1){
          sum-=nums[j];
            if(nums[j]==0) z--;
            j++;
        } 
          res=max(res,i-j);  
        }
      return res;
    }
};