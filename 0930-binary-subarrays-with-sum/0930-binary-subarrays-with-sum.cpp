class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0,res=0,n=nums.size();
      unordered_map<int,int> m;
        m[0]=1;
    for(int j:nums){
       sum+=j;
       res+=m[sum-goal]; 
      m[sum]++;
    }
    return res;    
    }
};