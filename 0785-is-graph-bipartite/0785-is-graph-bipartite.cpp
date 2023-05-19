class Solution {
bool color(vector<int> &v,int i,vector<vector<int>>& graph){
    if(v[i]==-1) v[i]=1; //coloring the first node
    for(auto it:graph[i]){
        if(v[it]==-1){
            v[it]=1-v[i];
    //after coloring i will check if 2 nodes have same color
          if(!color(v,it,graph)) return false;     
        }
        else if(v[it]==v[i]) return false;
    }
   return true; 
}
public:
    bool isBipartite(vector<vector<int>>& graph) {
       vector<int> v(graph.size(),-1);
        
        for(int i=0;i<graph.size();i++){
            if(v[i]==-1){
            if(!color(v,i,graph)) 
               return false;
            }
        }
        return true;
    }
};