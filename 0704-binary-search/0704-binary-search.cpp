class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,ans=-1;
        int e= nums.size();
        int mid= s + (e-s)/2;
        for(int i=0;i<nums.size();i++){
            if(nums[mid]==target){
                ans=mid;
                return ans;          
            }
            
            else if(nums[mid]>target)
                e=mid-1;
            
            else
                s=mid+1;
            
            mid= s + (e-s)/2;
        }
        return ans;
    }
};