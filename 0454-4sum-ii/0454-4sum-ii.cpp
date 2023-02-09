class Solution {
public:
int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4){ 
    int n=nums1.size(),sum=0;
    unordered_map<int,int> m;
    for(auto i:nums1){
    for(auto j:nums2){
       m[i+j]++;     
     }
    }
    for(auto i:nums3){
    for(auto j:nums4){
       if(m.count(-(i+j))){
           sum+=m[-(i+j)];
       }    
     }
    }
    return sum;
  }
};