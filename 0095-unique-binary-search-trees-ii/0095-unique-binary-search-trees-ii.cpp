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
vector<TreeNode*> solve(int i,int j){
  vector<TreeNode*> v;
    if(i>j)
      return {NULL};
for(int k=i;k<=j;k++){
vector<TreeNode*> l=solve(i,k-1);
vector<TreeNode*> r=solve(k+1,j);
  
  for(int n=0;n<l.size();n++){
  for(int m=0;m<r.size();m++){
    TreeNode* root= new TreeNode(k);
    root->left=l[n];
    root->right=r[m];
    v.push_back(root);
  }  
  }
   }
  return v;
  } 
public:
vector<TreeNode*> generateTrees(int n) {
     
  return solve(1,n);
    }
};