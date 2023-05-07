class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
    int n=obstacles.size();
    vector<int> v,sum; 
        sum.push_back(obstacles[0]);
        v.push_back(1);
    for(int i=1;i<n;i++){
        if(sum.back()<=obstacles[i]){
            sum.push_back(obstacles[i]);
            v.push_back(sum.size());
        }
        else{
        int j=upper_bound(sum.begin(),sum.end(),obstacles[i])-sum.begin(); 
        sum[j]=obstacles[i];
        v.push_back(j+1);
        }
    }  
        return v;
    }
};