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
   void order(TreeNode* root,vector<int> &v){
        if(root){ 
        v.push_back(root->val); 
        order(root->left,v);
         order(root->right,v); 
        }
   }
public:
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int> v; 
       order(root,v);
         
        return v;
        
    }
};