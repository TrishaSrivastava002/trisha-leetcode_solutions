class Solution {
    int solve(vector<int>& nums, int t,int mid){
        int sum=0;
        for(int it:nums){
            if(it>mid){
              sum+=ceil((double)it/(double)mid);
            }
            else if(it<=mid){
              sum++;
            }
        }
    if(sum<=t) return 1;
      return 0;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold){
        int s=1,e=1e8,res=INT_MAX;
        while(s<=e){
            int mid=(s+e)/2;
        if(solve(nums,threshold,mid)){
              res=min(mid,res);
              e=mid-1;
          }
        else s=mid+1;
        }
      return res;
    }
};