class Solution {
    void solve(vector<int> nums,vector<int> output,int index, vector<vector<int>> &ans){
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }
        //not pick
        solve(nums,output,index+1,ans);
        //pick
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
         solve(nums,output,index,ans);
        return ans;
    }
};