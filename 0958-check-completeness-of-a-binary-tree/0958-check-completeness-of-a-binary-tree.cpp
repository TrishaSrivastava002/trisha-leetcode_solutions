class Solution {
    /*
int countcbs(TreeNode* root){
     if(root==NULL)
            return 0;
   return 1+countcbs(root->left)+countcbs(root->right);
 }
    bool cbs(TreeNode* root,int i,int count){
         if(root==NULL)
            return true;
     if(i>=count)
         return false;
     return cbs(root,2*i+1,count) && cbs(root,2*i+2,count);  }
     */
    int node(TreeNode* root){ //Calculate Number of Node
    if(root==NULL)
        return 0;
    
    return 1+node(root->left)+node(root->right);
}
bool help(TreeNode *root, int a, int n){
    if(root==NULL){
        return true;
    }
    if(a>=n){
        return false;
    }
    return help(root->left, 2*a+1,n) && help(root->right, 2*a+2,n);
}
public:
    bool isCompleteTree(TreeNode* root) {
        /*
        if(root==NULL)
            return true;
        int n = countcbs(root);
    return cbs(root,0,n);
    */
        if(root==NULL){
        return true;
    }
    int n=node(root);
    return help(root,0,n);
    }
};
/*
int node(TreeNode* root){ //Calculate Number of Node
    if(root==NULL){
        return 0;
    }
    return 1+node(root->left)+node(root->right);
}
bool help(TreeNode *root, int a, int n){
    if(root==NULL){
        return true;
    }
    if(a>=n){
        return false;
    }
    return help(root->left, 2*a+1,n) && help(root->right, 2*a+2,n);
}


bool isCompleteTree(TreeNode* root) {
    if(root==NULL){
        return true;
    }
    int n=node(root);
    return help(root,0,n);
}
*/