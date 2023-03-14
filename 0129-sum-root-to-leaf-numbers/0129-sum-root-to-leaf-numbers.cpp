class Solution {
void solve(TreeNode* root,vector<int> v,vector<vector<int>> &v1){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        v.push_back(root->val);
        v1.push_back(v);
        return ;
    }
    v.push_back(root->val);
    solve(root->left,v,v1);
    solve(root->right,v,v1);
}
public:
    int sumNumbers(TreeNode* root){  int sum=0,res=0;
    vector<int> v; 
    vector<vector<int>> v1;                          
    solve(root,v,v1);
    for(int i=0;i<v1.size();i++){
        int sum=0;
    for(int j=0;j<v1[i].size();j++)
         sum=sum*10+v1[i][j];   
        res+=sum;
    }
       return res;
    }
};