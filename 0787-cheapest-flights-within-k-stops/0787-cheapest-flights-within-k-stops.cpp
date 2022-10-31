class Solution {
public:
int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k){     
    vector<pair<int,int>> adj[n];
    vector<int> dist(n,1e9);
    queue<vector<int>> q;
   
    for(auto it:flights) adj[it[0]].push_back({it[1],it[2]});
    dist[src] = 0;
    q.push({0,src,0});
    //    stop src cost                                                                                
while(!q.empty()){
   auto it=q.front();
   q.pop();
   int stop=it[0];
   int node=it[1];
   int cost=it[2];     
if(stop>k) continue;
for(auto j:adj[node]){
     int adjnode=j.first;
     int adjcost=j.second;
    if(cost+adjcost<dist[adjnode] && stop<=k){
      dist[adjnode]=cost+adjcost;
    q.push({1+stop,adjnode,cost+adjcost});  
    } 
    }
    }                                                                               
     return dist[dst]==1e9?-1:dist[dst];  
    }  
};