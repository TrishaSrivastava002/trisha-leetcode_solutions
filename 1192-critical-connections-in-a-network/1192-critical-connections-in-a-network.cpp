class Solution {
private:
int timer=1;
void dfs(int i,int parent,vector<int> adj[],vector<int> &vis,int tin[],int low[],vector<vector<int>> &bridges){
    vis[i]=1;
    tin[i]=low[i]=timer;
    timer++;
    for(auto it:adj[i]){
       if(it==parent) continue;
        if(!vis[it]){
            dfs(it,i,adj,vis,tin,low,bridges);
            low[i]=min(low[i],low[it]);
            //check for a bridge
        if(low[it]>tin[i]) bridges.push_back({it,i});
        }
        else{
          //means it has already been visited so it cannot be a bridge
           low[i]=min(low[i],low[it]);   
        }
    }
}
public:
 vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
    vector<vector<int>> bridges;
    vector<int> adj[n];
    for(auto &it:connections){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    } 
    vector<int> vis(n,0);
    int tin[n],low[n];
    dfs(0,-1,adj,vis,tin,low,bridges);
      return bridges;
    }  
};