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
    vector<vector<int>> verticalTraversal(TreeNode* root){
    vector<vector<int>> v;
    if(root==NULL) return v;
// x-axis(int) value,y-axis(map)multiple nodes having same y value so we need to use vector/multiset 
    map<int,map<int,multiset<int>>> m;
    queue<pair<TreeNode*,pair<int,int>>> q;
    q.push({root,{0,0}});
    while(!q.empty()){
        TreeNode* node=q.front().first;
        int x=q.front().second.first,y=q.front().second.second;
        q.pop();
        m[x][y].insert(node->val);
        if(node->left){
            q.push({node->left,{x-1,y+1}});
        }
        if(node->right){
            q.push({node->right,{x+1,y+1}});
        }
    }
        for(auto it:m){
            vector<int> y;
        for(auto x:it.second){
              y.insert(y.end(),x.second.begin(),x.second.end());
            }
           v.push_back(y); 
        }
        return v;
    }
};