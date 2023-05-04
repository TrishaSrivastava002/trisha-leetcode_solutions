class Solution{
public:
    int removeDuplicates(vector<int>& nums){
       for(int i=0;i<nums.size();i++){
           int k=count(nums.begin(),nums.end(),nums[i]);
           if(k>2){
               nums.erase(nums.begin()+i,nums.begin()+i+k-2);
               // i+=k;
           }
      }
        return nums.size();
    }
};