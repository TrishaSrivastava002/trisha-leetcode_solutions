class Solution {
private:
void dfs1(vector<int> adj[], vector<int>& child, int length, int root, vector<int>& visited,vector<int> &ans){
        visited[root] = 1;
        ans[0] += length;
        length++;
        for(auto& x: adj[root]){
            if(visited[x]) continue;
            dfs1(adj, child, length, x, visited, ans);
            child[root] += child[x];
        }
        child[root] += 1;
    }   
void dfs2(vector<int> adj[], vector<int>& child, int root, vector<int>& visited, int n, vector<int>& ans){
        visited[root] = 1;
        for(auto& x: adj[root]){
            if(visited[x]) continue;
            ans[x] = ans[root] - child[x] + n - child[x];
            dfs2(adj , child, x, visited, n, ans);
        }
    }
public:
 vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
 vector<int> v(n),ans(n),child(n),vis(n,0);
 vector<int> adj[n];
        for(auto &edge: edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
     
        dfs1(adj , child, 0, 0, vis, ans);
        for(int i=0;i<n;i++) vis[i]=0;
        
        dfs2(adj , child, 0, vis, n, ans);
        return ans;      
    }
};