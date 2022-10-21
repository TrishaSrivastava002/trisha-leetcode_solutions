class Solution {
public:
int subarraySum(vector<int>& nums, int k) {
    int sum=0,j=0;
    unordered_map<int,int> m;
    m[sum]=1;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        int res=sum-k;
        if(m.find(res)!=m.end()) j+=m[res];
        m[sum]++;
    }
    return j;
    }
};