class Solution {
void dfs(unordered_map<int,list<int>> &adj,int parent,int node,vector<int> &vis,stack<int> &s){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it])
            dfs(adj,node,it,vis,s); 
    }
    s.push(node);
}
public:
vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) { int k=0;
    stack<int> s;
    vector<int> v,vis(numCourses,0);
    unordered_map<int,list<int>> adj;
    unordered_map<int,int> pos;   
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            adj[v].push_back(u);
        }
        for(int i=0;i<numCourses;i++){
            if(!vis[i])
              dfs(adj,-1,i,vis,s);
        }
        while(!s.empty()){
          v.push_back(s.top());
            pos[s.top()]=k++;
            s.pop();
        }
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                if(pos[i]>pos[it])
                    return {};
            }  
        }                                                                   
        return v;
    }
};