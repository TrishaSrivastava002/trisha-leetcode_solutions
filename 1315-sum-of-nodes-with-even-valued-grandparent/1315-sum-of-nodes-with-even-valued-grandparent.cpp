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
int solve(TreeNode* parent,TreeNode* grandparent){
    if(parent==nullptr) return 0;
    int l=solve(parent->left,parent);
    int r=solve(parent->right,parent);
      if(grandparent->val%2==0 && parent->left!=nullptr) l+=parent->left->val; 
      if(grandparent->val%2==0 && parent->right!=nullptr) r+=parent->right->val;
    return l+r;
}
public:
    int sumEvenGrandparent(TreeNode* root){
      return  solve(root->left,root)+solve(root->right,root);    
    }
};