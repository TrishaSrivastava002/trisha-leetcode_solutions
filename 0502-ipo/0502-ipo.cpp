class Solution {
public:
int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital){
    int n=profits.size();
   priority_queue<int> q;
   vector<pair<int,int>> v(n);
   for(int i=0;i<n;i++) v[i]={capital[i],profits[i]};
   sort(v.begin(),v.end());
    int j=0;
   while(k--){
     while(j<n && v[j].first<=w){
         q.push(v[j].second);
         j++;
     }
     if(q.empty()) break;
     w+=q.top();
       q.pop();
   }
    return w;
    }
};