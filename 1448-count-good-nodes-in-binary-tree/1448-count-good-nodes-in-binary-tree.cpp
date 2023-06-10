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
    int k=0;
   void solve(TreeNode* root,int maxi){
       if(root==NULL){
         return ;  
       } 
       if(root->val>=maxi){
          maxi=root->val;
          k++;
       }
        solve(root->left,maxi);
        solve(root->right,maxi);

    } 
public:
    int goodNodes(TreeNode* root) {
        int maxi=root->val;
        solve(root,maxi);
        return k;
    }
};