class Solution {
public:
  int findMinDifference(vector<string>& timePoints){ 
      int mini=INT_MAX;
      vector<int> v;
   for(int i=0;i<timePoints.size();i++){
     v.push_back(stoi(timePoints[i].substr(0,2))*60+stoi(timePoints[i].substr(3,2)));
   } 
      sort(v.begin(),v.end());
      for(int i=1;i<v.size();i++) mini=min(mini,v[i]-v[i-1]);
      //if the difference in time is 24 hours between v[0] and v[n-1]
      mini=min(mini,v[0]-v[v.size()-1]+24*60);                                              
      
      return mini;
    }
};