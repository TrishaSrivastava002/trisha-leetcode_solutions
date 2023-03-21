class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long n=nums.size(),j=0,sum=0;
      for(int i=0;i<n;i++){
// another way of finding continuous occurence of 0's in the array
        if(nums[i]==0){ 
            j++;
            sum+=j;
          } 
          else j=0;
      }
       return sum;
    }
};