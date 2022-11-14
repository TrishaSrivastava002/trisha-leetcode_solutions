class Solution {
void dfs(vector<vector<int>>& stones,vector<int> &vis,int i){
       vis[i]=1;
    for(int j=0;j<stones.size();j++){
        if(!vis[j] && (stones[j][0]==stones[i][0] || stones[j][1]==stones[i][1]))                dfs(stones,vis,j);
    }
    }
public:
 int removeStones(vector<vector<int>>& stones){
     int n=stones.size();
     vector<int> vis(n,0);
     for(int i=0;i<stones.size();i++){
        if(!vis[i]){
            n--;
           dfs(stones,vis,i); 
        }
     }
     return n;
    }
};