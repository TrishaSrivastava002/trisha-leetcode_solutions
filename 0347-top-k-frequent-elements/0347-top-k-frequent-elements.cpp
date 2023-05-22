class Solution {
   static bool cmp(pair<int,int>&a, pair<int,int>&b){
        return a.second>b.second; 
    }
      
public:
    vector<int> topKFrequent(vector<int>& nums, int k) { 
       map<int,int> m;
        vector<int> v;
   
       vector<pair<int, int>> v2;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto &it:m)
            v2.push_back({it.first,it.second});
        sort(v2.begin(),v2.end(),cmp);
       // reverse(v2.begin(),v2.end());
        
        while(k--)
            v.push_back(v2[k].first);
           
        return v;
    }
};