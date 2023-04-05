class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX,n=nums.size(),sum=0,j=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=target) return 1;
            sum+=nums[i];
            if(sum>=target){
               while(sum>=target && j<i) sum-=nums[j++];
               ans=min(ans,i-j+2);
            } 
            //if(sum==target) ans=min(ans,i-j+1);
        }
        return (ans==INT_MAX)?0:ans; 
    }
};