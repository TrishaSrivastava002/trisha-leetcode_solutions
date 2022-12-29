class Solution{
public:
 vector<int> getOrder(vector<vector<int>>& tasks){ int n=tasks.size(),i=0;
       vector<int> v;
       vector<vector<int>> v1;
   for(int i=0;i<n;i++) v1.push_back({tasks[i][0],tasks[i][1],i});
   sort(v1.begin(),v1.end());                                               
   priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> q;
     int end=v1[0][0];
   while(i<n){
       if(!q.empty()){
         end+=q.top()[0];
           v.push_back(q.top()[1]);
           q.pop();
       }
       while(i<n && v1[i][0]<=end){
          q.push({v1[i][1],v1[i][2],v1[i][0]});
           i++;
       }
     if(q.empty() && i<n && end<v1[i][0]) end=v1[i][0];  
   }
   while(!q.empty()){
       v.push_back(q.top()[1]);
       q.pop();
   }
     return v;                                                   
  }
};