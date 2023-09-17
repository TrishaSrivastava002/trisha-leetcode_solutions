class Solution {
public:
  int minimumEffortPath(vector<vector<int>>& heights){ 
     int r=heights.size(),c=heights[0].size();
     vector<vector<int>> dis(r,vector<int>(c,1e9));
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
       q.push({0,{0,0}});
       dis[0][0]=0;
       vector<int> hr={-1,0,1,0};
       vector<int> hc={0,1,0,-1};
    while(!q.empty()){
       int i=q.top().second.first;
       int j=q.top().second.second;
       int k=q.top().first;
        q.pop();
    if(i==r-1 && j==c-1) return k;
       for(int z=0;z<4;z++){
           int nr=i+hr[z];
           int nc=j+hc[z];
    if(nr>=0 && nr<r && nc>=0 && nc<c){
       int mini=max(k,abs(heights[i][j]-heights[nr][nc]));
    if(dis[nr][nc]>mini){
       dis[nr][nc]=mini;
       q.push({dis[nr][nc],{nr,nc}}); 
            } 
          }
       }
    }
     return 0;
    }
};