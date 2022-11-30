class Solution {
public:
bool uniqueOccurrences(vector<int>& arr) {
    vector<int> v;
        map<int,int> m;
    for(auto i:arr) m[i]++;
    
    for(auto it:m) v.push_back(it.second); 
    
    for(int i=0;i<v.size();i++){
        if(count(v.begin(),v.end(),v[i])!=1) return 0;
    }
    return 1;
    }
};