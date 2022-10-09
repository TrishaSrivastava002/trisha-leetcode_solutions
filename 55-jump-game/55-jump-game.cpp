class Solution {
public:
bool canJump(vector<int>& nums) {
        int k=nums[0],n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i+nums[i]>k)
                k=i+nums[i];
            if(k>=nums.size()-1) return true;
    if(i==k) return false;//this means there was no useful result in the way
        }
        return false;

    }
};