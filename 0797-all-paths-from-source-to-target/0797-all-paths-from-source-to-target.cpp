class Solution {
    public:
    vector<vector<int>> v1;
    void dfs(vector<vector<int>>& graph,int i,vector<int> &v){
        int n=graph.size(),m=graph[0].size();
     v.push_back(i);
        for(auto j:graph[i]){
            if(j==n-1){
                v.push_back(j);
                v1.push_back(v);
                v.pop_back();   
                    }
               else{
                dfs(graph,j,v);
                v.pop_back();    
               }    
            }           
        }
    
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph){   
     vector<int> v;    
   dfs(graph,0,v);
     return v1;
    }
};