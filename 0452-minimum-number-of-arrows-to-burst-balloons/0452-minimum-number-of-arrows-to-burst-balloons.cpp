class Solution {
public:
int findMinArrowShots(vector<vector<int>>& points){
        int n=points.size(),k=1;
      sort(points.begin(),points.end());
       int x=points[0][1];
      for(int i=1;i<n;i++){
          if(points[i][0]>x){
              k++;
              x=points[i][1];
          }
          x=min(x,points[i][1]);
         
      }
        return k;
    }
};