class Solution {
public:
long long maximumSubarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    long long sum=0,mini=0,j=0;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
        sum+=nums[i];
    if(i-j+1==k){
        if(m.size()==k) mini=max(mini,sum);
        sum-=nums[j];
        m[nums[j]]--;
        if(!m[nums[j]]) m.erase(nums[j]);
        j++;
        }
        }
     return mini;
    }
};