class Solution {
public:
int maxPoints(vector<vector<int>>& points) {
    int n=points.size(),sum=1;
    for(int i=0;i<n-1;i++){
       unordered_map<double,int> m;
    for(int j=i+1;j<n;j++){
double s=(double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]);
     if(points[j][1]-points[i][1]<0 && (points[j][0]-points[i][0])==0)
         //infinite slope in case of perpendicular 
         m[abs(s)]++;
     else
         m[s]++;
      }
       int ans=0;
    for(auto it:m){
        ans=max(ans,it.second+1);
        sum=max(sum,ans);
    }
      }
    return sum;
    }
};