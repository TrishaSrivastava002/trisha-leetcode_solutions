class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       int n=rooms.size();
       vector<int> vis(n,0);
   queue<int> q;
    q.push(0);
    while(!q.empty()){
        int k=q.front();
        q.pop();
        vis[k]=1;
        for(auto it:rooms[k]){
            if(!vis[it]) q.push(it);
        }
    }
    for(int i=0;i<n;i++){
        if(vis[i]==0) return 0;
    }
    return 1;
    }
};