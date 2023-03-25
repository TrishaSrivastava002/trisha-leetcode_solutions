class Solution {
void dfs(vector<vector<int>> &adj,vector<int> &vis,int i,long long &k){
    if(vis[i]) return ;
    k++;
    vis[i]=1;
    for(auto it:adj[i]){
        if(!vis[it]) dfs(adj,vis,it,k);
    }
}
public:
long long countPairs(int n, vector<vector<int>>& edges){
       long long ans=0;
       vector<vector<int>> adj(n);
       vector<int> vis(n,0);
       for(auto edge:edges){
           adj[edge[0]].push_back(edge[1]);
           adj[edge[1]].push_back(edge[0]);
       }
       for(int i=0;i<n;i++){
          if(vis[i]) continue;
          long long k=0;
          dfs(adj,vis,i,k);
          ans+=k*(n-k);
       }
      return (ans/2);
    }
};