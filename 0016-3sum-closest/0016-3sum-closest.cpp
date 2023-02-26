class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target){
      int n=nums.size(),ans=INT_MAX,res=0;
      sort(nums.begin(),nums.end());
      for(int i=0;i<n;i++){
         int s=i+1,e=n-1;
         while(s<e){
            int sum=nums[i]+nums[s]+nums[e];
             int dif=abs(sum-target);
            if(dif<ans){
                ans=dif;
                res=sum;
            }
            if(sum>target) e--;
             else s++;
           }
        }
      return res;
    }
};