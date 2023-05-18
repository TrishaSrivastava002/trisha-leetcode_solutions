class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    vector<int> v,vis(n);
    unordered_map<int,int> m;
    for(auto i:edges){
      vis[i[1]]=1;
    }
    for(int i=0;i<n;i++){
        if(vis[i]==0) v.push_back(i);
    }      
    return v;
    }
};