class Solution {
vector<int> solve(int i,int parent,vector<vector<int>> &adj, string &labels,vector<int>& ans){     vector<int> count(26,0);
      for(auto it:adj[i]){
          if(it!=parent){
        vector<int> c=solve(it,i,adj,labels,ans); //variable vector
        for(int j=0;j<26;j++) count[j]+=c[j];   
      }    
    }
    char ch=labels[i];
    count[ch-'a']++;
    ans[i]=count[ch-'a'];
    return count; //as it is not the final ans vector and contains all updated index
    }
public:
vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) { 
     vector<vector<int>> adj(n, vector<int>());
     vector<int> ans(n,0);
    for(auto i:edges){
      adj[i[0]].push_back(i[1]);
      adj[i[1]].push_back(i[0]);  
    }  
   solve(0,0,adj,labels,ans);   
    return ans;
    }
};