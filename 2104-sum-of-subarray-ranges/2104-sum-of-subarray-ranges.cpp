class Solution {
public:
long long subArrayRanges(vector<int>& nums){ long long sum=0;
        vector<long long> v;
        
    for(int i=0;i<nums.size();i++){
        int mini=nums[i],maxi=nums[i];
    for(int j=i;j<nums.size();j++){
         mini=min(nums[j],mini);
         maxi=max(nums[j],maxi);
         v.push_back(abs(maxi-mini));
        }    
        }
        for(auto i:v) sum+=i;
        return sum;
}
};