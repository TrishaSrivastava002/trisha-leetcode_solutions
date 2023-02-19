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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v1;
        if(root==NULL)
            return v1;
        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright = true;
        while(!q.empty()){
            int size = q.size();
          vector<int> v2(size);
            for(int i=0;i<size;i++){ 
           TreeNode* temp= q.front();
            q.pop();
            int index = lefttoright ? i : size-i-1;
            v2[index]= temp->val;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        } 
            lefttoright = !lefttoright;
          v1.push_back(v2);
    }
         
        return v1;
    }
};