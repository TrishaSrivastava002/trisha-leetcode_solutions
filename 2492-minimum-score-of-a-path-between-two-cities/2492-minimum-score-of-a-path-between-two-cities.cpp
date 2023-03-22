class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        int mini=1e4;
       vector<vector<int>> adj[n+1];
       vector<int> vis(n+1,0);
     for(auto it:roads){
         adj[it[0]].push_back({it[1],it[2]});
         adj[it[1]].push_back({it[0],it[2]});
     }
     queue<vector<int>> q;
     vis[1]=1;
     q.push({1,10000});
     while(!q.empty()){
         int x=q.front()[0];
         q.pop();
         for(auto it:adj[x]){
            mini=min(mini,it[1]);
             if(!vis[it[0]]){
                vis[it[0]]=1;
               q.push({it[0],it[1]});  
             }  
         }
     }
     return mini;
    }
};