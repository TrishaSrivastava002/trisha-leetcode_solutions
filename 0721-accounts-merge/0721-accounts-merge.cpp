class disjoint{
vector<int> size,parent;
public:
disjoint(int n){
    size.resize(n+1);
    parent.resize(n+1);
     for(int i=0;i<=n;i++){
         parent[i]=i;
         size[i]=1;
     }
    }
int findparent(int x){
        if(x==parent[x]) return x;
        return parent[x]=findparent(parent[x]);
    }
 void unionbysize(int u,int v){
     int parent_u=findparent(u);
     int parent_v=findparent(v);
     if(parent_u==parent_v) return ;
     if(size[parent_u]<size[parent_v]){
         size[parent_v]+=size[parent_u];
        parent[parent_u]=parent_v; 
     }
     else{
        size[parent_u]+=size[parent_v];
        parent[parent_v]=parent_u; 
     }
 } 
};
class Solution {
public:
vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
    unordered_map<string,int> m;
   int n=accounts.size();
    disjoint ds(n);
 for(int i=0;i<n;i++){
 for(int j=1;j<accounts[i].size();j++){
   // accounts[i][0] is not included in the map as there can be multiple same names   
     if(m.find(accounts[i][j])==m.end()) m[accounts[i][j]]=i;
     else ds.unionbysize(i,m[accounts[i][j]]);//the current i and the previously 
    //assigned i when an id is repeated    
 }
 }
 vector<string> s[n];
 for(auto it:m){
     string st=it.first;
     int j=ds.findparent(it.second);
     s[j].push_back(st);
 }
 vector<vector<string>> ans;
 for(int i=0;i<n;i++){
   if(s[i].size()==0) continue;
     sort(s[i].begin(),s[i].end());
     vector<string> v;
     v.push_back(accounts[i][0]);
   for(auto j:s[i]){
     v.push_back(j);  
   }
     ans.push_back(v);
 }    
  return ans;
    }
};