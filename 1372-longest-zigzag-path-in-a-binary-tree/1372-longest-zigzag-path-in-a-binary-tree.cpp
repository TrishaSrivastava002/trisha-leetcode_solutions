/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int maxi=INT_MIN;
void solve(TreeNode* root,bool v,int k){
    if(!root) return ;
    maxi=max(maxi,k);
    // if(root->left || root->right) return 1;
    if(v){
      solve(root->left,0,k+1); 
      solve(root->right,1,1);
    }
    else{
        solve(root->right,1,k+1);
        solve(root->left,0,1); 
    }
}
public:
    int longestZigZag(TreeNode* root){ 
        int k=0;
       if(!root) return 0;
       solve(root,1,k);
       solve(root,0,k);
        return maxi;
    }
};