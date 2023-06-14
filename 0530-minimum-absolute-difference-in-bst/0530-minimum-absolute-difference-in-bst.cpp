
class Solution {
    void inorder(TreeNode* root,vector<int> &v){
        if(root==NULL)
            return ;
        inorder(root->left,v);
        v.push_back(root->val);
         inorder(root->right,v);
    }
public:
    int getMinimumDifference(TreeNode* root) {
       vector<int> v;
        inorder(root,v);
        int k= INT_MAX;
        for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
          k=min(k,v[j]-v[i]);  
        }   
        }
        return k;
    }
};