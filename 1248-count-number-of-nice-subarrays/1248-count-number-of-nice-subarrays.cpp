class Solution{
public:
int numberOfSubarrays(vector<int>& nums, int k){
    int sum=0,n=nums.size(),j=0,c=0;
    unordered_map<int,int> m;
    m[0]=1;    
    for(int i=0;i<n;i++){
        if(nums[i]%2==0) nums[i]=0;
        else nums[i]=1;
      }
     // for(int i=0;i<n;i++){
     //    sum+=nums[i];
     //    while(sum>k && j<=i){
     //       sum-=nums[j++];
     //      }
     //     if(sum==k) c++;
     //    }
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(m.find(sum-k)!=m.end()) c+=m[sum-k];
        m[sum]++;
        }
      return c;
    }
};