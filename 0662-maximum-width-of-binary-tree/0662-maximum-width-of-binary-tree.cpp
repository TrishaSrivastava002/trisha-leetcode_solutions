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
    int widthOfBinaryTree(TreeNode* root){
       if(!root) return 0;
       int w=1;
       queue<pair<TreeNode*,long long int>> q;
       q.push({root,0});
        while(!q.empty()){
            int top=q.front().second;
            int l=0,r=0;
            int len=q.size();
          for(int i=0;i<len;i++){
            TreeNode* node=q.front().first;
            long long int k=q.front().second-top;
            q.pop();
              if(i==0) l=k;
              if(i==len-1) r=k;
              if(node->left) q.push({node->left,2*k+1});
              if(node->right) q.push({node->right,2*k+2});
          }
            w=max(w,r-l+1);
        }
        return w;
    }
};