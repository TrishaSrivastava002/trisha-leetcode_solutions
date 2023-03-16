class Solution {
  int curr;
TreeNode* ans(vector<int>& postorder,vector<int>& inorder,int left,int right){
  if (left > right)
                return nullptr;
            int mid = -1;
   TreeNode *head = new TreeNode(postorder[curr--]);
  if(right==left) return head;
            
            for (int i = left; i <= right; i++){ 
                if (inorder[i] == head->val){
                    mid = i;
                    break;
                } }
         
            head->right = ans(postorder,inorder, mid + 1, right);
            head->left = ans(postorder,inorder, left, mid - 1);
            
            return head;
}
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       curr = inorder.size() - 1;
        return ans(postorder, inorder ,0,inorder.size()-1);
    }
};