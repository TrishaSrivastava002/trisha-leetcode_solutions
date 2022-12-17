class Solution {
 bool dfs(vector<vector<int>> &adj,int parent,int i,vector<int> &vis){
     if(vis[i]==1) return 1; // reached already visited node -  cycle detected
        vis[i]=1;
     for(auto j:adj[i]){
 if(parent!=j && dfs(adj,i,j,vis)) return 1; //cycle detected
        } 
     return 0;
    }
public:
 vector<int> findRedundantConnection(vector<vector<int>>& edges){
    vector<int> res;
    vector<vector<int>> adj(edges.size()+1);
     
  for(int i=0;i<edges.size();i++){
       vector<int> vis(edges.size()+1,0);
       int u=edges[i][0],v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
   if(dfs(adj,-1,u,vis)) return edges[i];
        }
        return { };
    }
};