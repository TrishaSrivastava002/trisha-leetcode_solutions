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
bool solve(TreeNode* l,TreeNode* r){
  if(l==NULL || r==NULL){
    if(r==NULL && l==NULL)
        return 1;
    
        return 0;
      }
  if(l->val!=r->val)
        return 0;
  
  bool l_root,r_root;
  l_root=solve(l->right,r->left);
  r_root=solve(l->left,r->right);
  return l_root && r_root;
}
public:
    bool isSymmetric(TreeNode* root){ bool r,l;
        if(root==NULL)
          return 1;
     
        return solve(root->left,root->right);
    }
};