/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution{
map<TreeNode*,TreeNode*> m;
map<TreeNode*,int> vis;
vector<int> v;
void solve(TreeNode* root,int k,int i){
    if(!root) return ;
    if(vis[root]==1) return ;
    vis[root]=1;
    if(i==k){
      v.push_back(root->val);
      return ;
    }
    if(root->left) solve(root->left,k,i+1);
    if(root->right) solve(root->right,k,i+1);
    solve(m[root],k,i+1);
}
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k){
 //we cannot move from leaf node to root node so we will implement bfs and make a pair of leaf node and it's parent node     
       if(!root) return v; 
       queue<TreeNode*> q;
       q.push(root);
       while(!q.empty()){
           TreeNode* node=q.front();
           q.pop();
           if(node==target) solve(target,k,0);
           if(node->left){
             m[node->left]=node;
             q.push(node->left);
           } 
           if(node->right){
             m[node->right]=node;
             q.push(node->right);
           } 
       }
        return v;
    }
};