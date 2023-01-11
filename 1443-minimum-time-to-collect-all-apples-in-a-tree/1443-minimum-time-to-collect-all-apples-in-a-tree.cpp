class Solution {
int solve(vector<bool>& has,vector<int> adj[],int i,int parent){
    int k=0;
    for(auto &j:adj[i]){
        if(j!=parent)
           k+=solve(has,adj,j,i); 
        }
        //returned to root after all the iterations
     if(i==0) return k;
     if(k==0 && has[i]==0) return 0;
     else  return k+2;  
 }
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple){
        int ans=0;
        vector<int> adj[n];
        for(auto &i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        return solve(hasApple,adj,0,-1);  
    }
};