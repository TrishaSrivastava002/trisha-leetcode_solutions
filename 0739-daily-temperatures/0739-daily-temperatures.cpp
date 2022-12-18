class Solution {
public:
vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n=temperatures.size();
  vector<int> v(n);
  stack<pair<int,int>> s;
  for(int i=0;i<n;i++){
      while(!s.empty() && s.top().first<temperatures[i]){
    //we cannot take s.top().first>temperatures[i] as the condition as we put
     //temperatures[i] on the top to get the ans for each index
        v[s.top().second]=i-s.top().second;
          s.pop();
      }
      s.push({temperatures[i],i});
  }
    while(!s.empty()){
        v[s.top().second]=0;
        s.pop();
    }
    return v;
    }
};