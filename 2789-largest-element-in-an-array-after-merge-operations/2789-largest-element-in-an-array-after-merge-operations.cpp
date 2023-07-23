class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
    int n=nums.size();  
    long long sum=nums[n-1],maxi=0;
    for(int i=n-2;i>=0;i--){
        long v=(long)nums[i];
       if(v<=sum){
                sum+=v;
                maxi=max(maxi,sum);
       }
        else{
            maxi=max(maxi,sum);
            sum=v;
        }   
       }
        return sum;
    }
};