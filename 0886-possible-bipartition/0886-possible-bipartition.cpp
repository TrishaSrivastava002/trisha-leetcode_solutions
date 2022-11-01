class Solution {
 bool solve(vector<int> adj[],int n,int i,vector<int> &color){
    if(color[i]==-1) color[i]=1;
    for(auto it:adj[i]){
      if(color[it]==-1){
           color[it]=1-color[i];
      if(!solve(adj,n,it,color)) return 0;
    }
      else if(color[it]==color[i]) return 0;
    }
     return 1;
    }   
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes){
        vector<int> adj[n+1];
        for(auto it:dislikes){
          adj[it[0]].push_back(it[1]);
          adj[it[1]].push_back(it[0]);
        }
        vector<int> color(n+1,-1);
        for(int i=1;i<=n;i++){
            if(color[i]==-1){
            if(!solve(adj,n,i,color)) return false;  
            }
        }
        return true;
    }
};