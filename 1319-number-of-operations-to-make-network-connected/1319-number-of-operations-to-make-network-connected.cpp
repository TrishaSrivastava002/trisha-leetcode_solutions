
class Solution {
public:
    vector<int> parent;
    int findparent(int node){
        if(node == parent[node])
            return node;
        return parent[node] = findparent(parent[node]);
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) return -1;
        int k=n;
        for (int i=0;i<n;i++) parent.push_back(i);
        for(int i=0;i<connections.size();i++){
          if(findparent(connections[i][0])!=findparent(connections[i][1])){
             parent[findparent(connections[i][0])]=findparent(connections[i][1]);
               k--;
          }    
        }                                                      
 return k-1;// -1 because a node in loop is it's own parent
    }
};