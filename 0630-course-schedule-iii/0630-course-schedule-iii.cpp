class Solution {
static bool cmp(vector<int> &a,vector<int> &b){
    return a[1]<b[1];
}
public:
 int scheduleCourse(vector<vector<int>>& courses){
    int n=courses.size();
  sort(courses.begin(),courses.end(),cmp);
  priority_queue<int> q;
     int sum=0;
  for(auto it:courses){
      if(sum+it[0]<=it[1]){
        sum+=it[0];
        q.push(it[0]);
      }
      else if(q.size() && q.top()>it[0]){
         sum+=it[0]-q.top();
          q.pop();
          q.push(it[0]);
      }
  }
     return q.size();
    }
};