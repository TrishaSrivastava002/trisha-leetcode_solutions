/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
     TreeNode* res(vector<int>& nums,int s,int e){
        if(e<s)
            return NULL;
     int mid=s+(e-s)/2;
        TreeNode* root= new TreeNode(nums[mid]);
        root->left=res(nums,s,mid-1); //never put 0  in place of s
        root->right=res(nums,mid+1,e);
        return root;  
    }
    
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> nums;
       ListNode* temp=head;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp=temp->next;
        }
           sort(nums.begin(),nums.end()); 
         if(nums.size()==0)
            return NULL;
     return res(nums,0,nums.size()-1);
    }
};