class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
      vector<vector<int>> adj(n,vector<int>(n,INT_MAX/2));
        for(int i=0; i<n; i++) adj[i][i]=0;
        
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]][edges[i][1]]=edges[i][2];
        adj[edges[i][1]][edges[i][0]]=edges[i][2];
    }   
    
    
    for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(adj[i][j]>adj[k][j]+adj[i][k]) adj[i][j]=adj[k][j]+adj[i][k];     
    }    
    }    
    }
        vector<int> v(n,0);
        int k=INT_MAX;
        
        for(int i=0;i<n;i++){
            int c=0;
        for(int j=0;j<n;j++){
            if(i==j) continue;
        if(adj[i][j]<=distanceThreshold) c++;    
            }
            v[i]=c;
            k=min(c,k);
        }
    for(int i=n-1;i>=0;i--){ //becoz the greatest number is asked
        if(v[i]==k) return i;
    }
     return -1;   
    }
};