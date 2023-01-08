class Solution {
bool solve(vector<int>& nums, int k,int mid){
    int sum=0,n=nums.size(),j=0;
    for(int i=0;i<n;i++){
    while(j<n && nums[j]-nums[i]<=mid) j++;  
        j--;
        sum+=(j-i);
    }
    return (sum>=k);
}
public:
    int smallestDistancePair(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
     int n=nums.size(),s=0,e=(nums[n-1]-nums[0]),res;
        while(s<e){
            int mid=s+(e-s)/2;
           if(solve(nums,k,mid)) e=mid;   
           else s=mid+1;
        }
    return e;
        
    }
};