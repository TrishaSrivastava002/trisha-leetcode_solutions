class Solution {
void dfs(unordered_map<int,list<int>> &adj,int i,vector<int> &vis){
    vis[i]=1;
    for(auto j:adj[i]){
        if(!vis[j]) dfs(adj,j,vis);
    }
     
}
public:
int findCircleNum(vector<vector<int>>& isConnected) {  int sum=0;
   unordered_map<int,list<int>> adj;
    vector<int> vis(isConnected.size(),0);
    for(int i=0;i<isConnected.size();i++){
    for(int j=0;j<isConnected[i].size();j++){
        if(isConnected[i][j]==1){
          adj[i].push_back(j);
          adj[j].push_back(i);   
        }
    }    
    }
    for(int i=0;i<isConnected.size();i++){
        if(!vis[i]){
		//counting the no.of isolated/vertex with no connections
            sum++;
            dfs(adj,i,vis);
        } 
    }
    return sum; 
    }
};