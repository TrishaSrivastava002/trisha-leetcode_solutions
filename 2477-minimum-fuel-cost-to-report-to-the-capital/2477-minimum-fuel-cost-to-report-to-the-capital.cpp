class Solution {
int solve(int seats,vector<int> adj[],long long &ans,int i,int parent){
  int sum=1;
  for(auto it:adj[i]){
      if(it==parent) continue;
      sum+=solve(seats,adj,ans,it,i);    
  }
    if(i>0) ans+=(sum+seats-1)/seats;
    return sum;
}
public:
long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
    long long ans=0;
       int n=roads.size()+1;
       vector<int> adj[n];
     for(auto it:roads){
         adj[it[0]].push_back(it[1]);
         adj[it[1]].push_back(it[0]);
     }
    solve(seats,adj,ans,0,-1);
     return ans;
    }
};