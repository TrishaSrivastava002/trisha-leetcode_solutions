class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;  
        /*
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                s=mid+1;
            else if(nums[mid]>target)
                e=mid-1;

        }
        */
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                return i;
        }
          return -1;
    }
};