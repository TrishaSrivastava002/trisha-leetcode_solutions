class Solution {
public:
vector<int> nextGreaterElements(vector<int>& nums){ 
   int n=nums.size();
    vector<int> v;
   stack<int> s;
   for(int i=0;i<n;i++){
      int j=i,tar=nums[i],c=0,k=0;
     while(k<n){
         if(nums[j]>tar){
           v.push_back(nums[j]);
           c=1;
           break;
         }
         if(j==n-1) j=-1;
        j++;
        k++;
     }
       if(c==0) v.push_back(-1);
   } 
    return v;
    }
};