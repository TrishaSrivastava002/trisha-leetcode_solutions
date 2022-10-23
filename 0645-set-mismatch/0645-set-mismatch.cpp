class Solution {
public:
vector<int> findErrorNums(vector<int>& nums) { int sum=0,n=nums.size();
    vector<int> v;
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++) m[nums[i]]++;
    for(auto j:m){
        if(j.second==2){
         v.push_back(j.first);
        break;
        } 
    }
  for(int i=1;i<n+1;i++){
    if(m[i]==0) v.push_back(i);                                           
   }
   //sort(v.begin(),v.end());
    return v;
    }
};