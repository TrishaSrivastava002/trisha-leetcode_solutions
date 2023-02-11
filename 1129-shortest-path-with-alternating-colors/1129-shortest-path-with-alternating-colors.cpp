class Solution {
public:
vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges){
    vector<vector<int>> vis(n,vector<int>(3,1e9));
       vector<pair<int,int>> adj[n];
    for(auto it:redEdges)  adj[it[0]].push_back({it[1],1});
    for(auto it:blueEdges) adj[it[0]].push_back({it[1],2});
    
    queue<pair<int,int>> q;
    q.push({0,0});
    vis[0][0]=0;
    while(!q.empty()){
        int node=q.front().first;
        int prev_color=q.front().second;
        q.pop();
    for(auto it:adj[node]){
           int new_node=it.first;
           int color=it.second;
           if(prev_color==color) continue;
        if(vis[new_node][color]==1e9){
           vis[new_node][color]=1+vis[node][prev_color];
           q.push({new_node,color});
         }
       } 
     }
    vector<int> dis(n,0);
    for(int i=1;i<n;i++){
      dis[i]=min(vis[i][1],vis[i][2]);
      if(dis[i]==1e9) dis[i]=-1;
    }
    return dis;
    }
};