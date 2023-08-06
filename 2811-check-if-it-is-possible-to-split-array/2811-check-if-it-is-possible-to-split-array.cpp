class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        int n=nums.size(),ans=0;
        if(n==1 && m>=1) return 1;
        if(n==2) return 1;  
        for(int i=0;i<n-1;i++){
            int sum=nums[i]+nums[i+1];
            if(sum>=m) ans=1;
        }
        return ans;
    }
};