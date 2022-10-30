class Solution {
    void solve(vector<int>& candidates, int target,vector<vector<int>> &v,vector<int> &v1,int i){
        if(target==0){
           v.push_back(v1); 
            return ;
        }   
      while(i<candidates.size() && target-candidates[i]>=0){
          v1.push_back(candidates[i]);
          solve(candidates,target-candidates[i],v,v1,i);
          i++;
          v1.pop_back();
          //if it does not go in the recursion it means its not a good fit so we do not pick it and remove it from our ans 
      }  
    } 
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> v;
       vector<int> v1;
  
        sort(candidates.begin(),candidates.end()); 
  
        solve(candidates,target,v,v1,0);
        
        return v;
    }
};
