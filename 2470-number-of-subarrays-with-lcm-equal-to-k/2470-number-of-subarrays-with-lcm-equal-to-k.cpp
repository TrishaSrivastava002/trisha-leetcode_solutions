class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int res=0;
     for(int i=0;i<nums.size();i++){
         int l=1;
     for(int j=i;j<nums.size();j++){
         l=lcm(nums[j],l);
         if(l==k) res++;
        if(l>k) break;
     }   
     }
        return res;
    }
};