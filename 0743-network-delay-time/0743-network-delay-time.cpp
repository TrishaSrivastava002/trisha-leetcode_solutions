class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k){
       vector<int> dis(n+1,INT_MAX);
        dis[0]=0;
        dis[k]=0;
  unordered_map<int,list<pair<int,int>>> adj;
      for(int i=0;i<times.size();i++) 
      adj[times[i][0]].push_back({times[i][1],times[i][2]});
        
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,k}); //distance and node
    while(!q.empty()){
      int prevdis=q.top().first;
      int prevnode=q.top().second;
        q.pop();
      for(auto it:adj[prevnode]){
         int nextnode=it.first;
         int nextdis=it.second;
     if(dis[nextnode]>prevdis+nextdis){
        dis[nextnode]=dis[prevnode]+nextdis;
        q.push({dis[nextnode],nextnode});
        } 
      }
    }
        int sum=-1;
        for(int i=0;i<dis.size();i++){
            if(dis[i]==INT_MAX) return -1;
            sum=max(sum,dis[i]);  
        } 
        return sum;
    }
};