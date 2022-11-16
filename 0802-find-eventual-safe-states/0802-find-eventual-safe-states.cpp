class Solution {
public:
vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
	vector<vector<int>> adj(n);
    vector<int> v;
    queue<int> q;
    vector<int> indegree(n,0);
    for(int i=0;i<n;i++){
    for(int j=0;j<graph[i].size();j++){
           adj[graph[i][j]].push_back(i);
          indegree[i]++;
       }    
       }
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0) q.push(i); 
    }
    while(!q.empty()){
        int node=q.front();
        q.pop();
        v.push_back(node);
        for(auto it:adj[node]){
            if(--indegree[it]==0) q.push(it);
        }
    }
    sort(v.begin(),v.end());
    return v;
    }
};