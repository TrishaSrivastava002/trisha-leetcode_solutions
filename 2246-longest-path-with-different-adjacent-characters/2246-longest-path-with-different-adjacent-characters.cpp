class Solution {
int solve(const vector<vector<int>> &adj,const string &s,int i,int &k){
    int max1=0,max2=0;
    for(int it:adj[i]){ 
      const int sum=solve(adj,s,it,k);
      if(s[i]==s[it]) continue;
         if(sum>max1){
            max2=max1;
            max1=sum;
         }
      else if(sum>max2) max2=sum;
    }
    k=max(k,max1+max2+1);
  return 1+max1;  
}
public:
    int longestPath(vector<int>& parent, string s){
       const int n=s.length();
        int k=1;
       vector<vector<int>> adj(n);
        
    for(int i=1;i<n;i++){
        adj[parent[i]].push_back(i);
    }
        solve(adj,s,0,k);
      return k;
    }
};