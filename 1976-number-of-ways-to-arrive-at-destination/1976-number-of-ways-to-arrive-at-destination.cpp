class Solution {
#define ll long long
public:
    int mod=1e9+7;
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<ll,ll>> adj[n];
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
        vector<ll> dis(n,LONG_MAX),ways(n,0);
         dis[0]=0;
        ways[0]=1;//there is only 1 way to reach 0
      for(int i=0;i<roads.size();i++){ 
          adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
          adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
      }
        q.push({0,0}); //node and distance
        while(!q.empty()){
          ll prevtime=q.top().first;
          ll prevnode=q.top().second;
           q.pop();
          for(auto it:adj[prevnode]){
               ll newnode=it.first;
               ll newtime=it.second;
          if(dis[newnode]>prevtime+newtime){
              dis[newnode]=prevtime+newtime;//updating the whole path
              q.push({dis[newnode],newnode});
              ways[newnode]=ways[prevnode];
              }
        else if(dis[newnode]==prevtime+newtime){
            //we are adding and not multiplying as not each path will give the shortest path with every pretime for example 2+4=6 and 5+1=6 but 5+4=9
           ways[newnode]=(ways[newnode]+ways[prevnode])%mod;
            }        
            }
            } 
      return ways[n-1];//ways to reach the last node
    }
};