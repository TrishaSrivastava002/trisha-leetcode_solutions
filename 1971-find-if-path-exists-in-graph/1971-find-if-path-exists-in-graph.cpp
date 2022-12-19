class Solution {
public:
bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    if(source==destination) return true;
      vector<int> adj[n];
      vector<int> vis(n,0);
    queue<int> q;
        for(auto &edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
    q.push(source);
    vis[source]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
    if(node==destination) return 1;
       vis[node]=1;
        
       for(auto it:adj[node]){
           if(!vis[it]){
             vis[it]=1;
             q.push(it);
           } 
       }     
    }
        return 0;
    }
};