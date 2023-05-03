class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    vector<vector<int>> v;
        set<int> s1,s2;
    vector<int> v1,v2;
    for(int i=0;i<nums1.size();i++){
        int k=0;
    for(int j=0;j<nums2.size();j++){
        if(nums1[i]==nums2[j]) k=1;  
    }
        if(!k) s1.insert(nums1[i]);
    }
    for(auto it:s1) v1.push_back(it);
        v.push_back(v1);
        
    for(int i=0;i<nums2.size();i++){
        int k=0;
    for(int j=0;j<nums1.size();j++){
        if(nums1[j]==nums2[i]) k=1;  
    }
        if(!k) s2.insert(nums2[i]);
    }
    for(auto it:s2) v2.push_back(it);
        v.push_back(v2);
        return v;
    }
};