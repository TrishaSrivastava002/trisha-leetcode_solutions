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
public:
    bool isSameTree(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return 1;
        if(p==NULL && q!=NULL || p!=NULL && q==NULL) return 0;
        
          bool l=isSameTree(p->left,q->left);
          bool r=isSameTree(p->right,q->right); 
          bool s=p->val==q->val;
        if(l && r && s) return 1;
         return 0;
        
    }
};