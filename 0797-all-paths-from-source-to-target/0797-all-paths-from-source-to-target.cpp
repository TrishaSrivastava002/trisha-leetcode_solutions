class Solution {
 void dfs(vector<vector<int>>& graph,int i,vector<int> temp,vector<int> vis,vector<vector<int>> &ans,vector<int> adj[],int des){
//      we are not passing temp & vis by address as we do not want to push all thr values in continuity of the other paths so no need to clear temp & vis
     if(i==des){
         temp.push_back(i);
         ans.push_back(temp);
         return ;
     }
     vis[i]=1;
     temp.push_back(i);
     for(auto it:adj[i]){
         if(!vis[it]) dfs(graph,it,temp,vis,ans,adj,des);
     }
 }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    int n=graph.size();
    vector<int> adj[n]; 
    for(int i=0;i<n;i++){
    for(auto it:graph[i]){
        adj[i].push_back(it);
    }
    }
    vector<int> temp,vis(n,0);
    vector<vector<int>> ans;
     //we only need to traverse the paths which starts from 0
     dfs(graph,0,temp,vis,ans,adj,n-1);       
      return ans;
    }
};