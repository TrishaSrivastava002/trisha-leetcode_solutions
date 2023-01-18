class Solution{
    int n;

void solve(vector<int>& nums,int i,int j, vector<int> &v1,set<vector<int>> &v){
    if(i>=n){
      v.insert(v1); 
      return ;  
    } 
    if(j==-1 || nums[j]<=nums[i]){
        v1.push_back(nums[i]);
      solve(nums,i+1,i,v1,v);
        v1.pop_back();
    } 
    solve(nums,i+1,j,v1,v);
}
public:
    vector<vector<int>> findSubsequences(vector<int>& nums){
       n=nums.size();
        vector<int> v1;
    set<vector<int>> v;
    vector<vector<int>> ans;
       solve(nums,0,-1,v1,v);
        for(auto i:v){
            if(i.size()>1) ans.push_back(i);
        }
        return ans;
    }
};