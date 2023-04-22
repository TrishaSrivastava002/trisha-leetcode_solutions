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
int solve(TreeNode* root,int &k){
    if(!root) return 0;
    int l=solve(root->left,k);
    int r=solve(root->right,k);
    k=max(l+r,k);
    return 1+max(l,r);
}
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int k=0;
        solve(root,k);
        return k;
    }
};