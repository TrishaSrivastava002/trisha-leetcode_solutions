class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size()-1,maxi=*max_element(nums.begin(), nums.end());
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
          if(nums[i]!=i+1) return 0;
        }
        if(nums[n]!=n) return 0;
        return 1;
    }
};