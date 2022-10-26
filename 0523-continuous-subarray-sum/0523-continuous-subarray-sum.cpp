class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            sum%=k;
          if(sum==0 && i) return 1;
          if(m.find(sum)!=m.end()){
            if(i-m[sum]>1) return 1; 
          }
            else m[sum]=i;
        }
        return 0;
    }
};