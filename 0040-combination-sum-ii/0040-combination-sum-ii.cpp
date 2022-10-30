class Solution { public:
    vector<vector<int>> v2;
    vector<int> v1;
void solve(vector<int>& candidates,int i,int target){
    if(target==0){
       v2.push_back(v1);
            return ; }
    
        if(i>=candidates.size() || target-candidates[i]<0)
        return ;
    
    if(target>=candidates[i]){
        v1.push_back(candidates[i]); 
        //pick
        solve(candidates,i+1,target-candidates[i]); 
        v1.pop_back();
        // i becomes i+1 which are same so we do i++
        while(i+1<candidates.size() && candidates[i]==candidates[i+1]) i++;
        //not pick
        solve(candidates,i+1,target); 
        } }
                
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int i=0;
        solve(candidates,i,target);
        return v2;
    }
};


