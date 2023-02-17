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
class BSTIterator{
 queue<int> q;
 TreeNode* node;
public:
    void solve(TreeNode* root){
     if(!root) return ;
     solve(root->left);
     q.push(root->val);
     solve(root->right);
   }
    BSTIterator(TreeNode* root){
       solve(root);
       node=root;
    }   
    int next(){
        if(q.size()!=0){
            int x=q.front();
            q.pop();
            return  x;
        } 
      return 0;
    }   
    bool hasNext(){
       return q.size()>0; 
    }
};
