class Solution {
int solve(vector<int>& nums, int k,int mid){
  int sum=0,c=1;//one subarray is already started
    for(int i:nums){
        if(i>mid) return 0;
         sum+=i;
        if(sum>mid){
            sum=i;
           c++;
        }
      if(c>k) return 0;
    }
    return 1;
}
public:
    int splitArray(vector<int>& nums, int k) {
      int s=0,e=1e9,res=INT_MAX;
      while(s<=e){
          int mid=s+(e-s)/2;
          if(solve(nums,k,mid)){
              res=min(mid,res);
              e=mid-1;
          }
          else s=mid+1;    
      }
      return res;
    }
};