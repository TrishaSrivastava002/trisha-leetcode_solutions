class Solution {
    int ans=-1;
void dfs(vector<int> adj[],int i,vector<int> &vis,vector<int> &prev,int dis){
    vis[i]=1;
    prev[i]=1;
    for(auto it:adj[i]){
        if(!vis[it]) dfs(adj,it,vis,prev,dis+1);
        else if(prev[it]!=-1) ans=max(ans,dis);
    }
    prev[i]=-1;
}
public:
    int longestCycle(vector<int>& edges) {
    int n=edges.size();
    vector<int> adj[n+1];
    vector<int> vis(n+1,0),prev(n+1,-1); 
    for(int i=0;i<n;i++){
       if(edges[i]!=-1) adj[edges[i]].push_back(i);
    } 
    for(int i=0;i<n;i++){
      if(!vis[i]) dfs(adj,i,vis,prev,1);     
    }
       return ans;
    }
};