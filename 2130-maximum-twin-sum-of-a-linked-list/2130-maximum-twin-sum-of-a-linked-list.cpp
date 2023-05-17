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
class Solution {
public:
    int pairSum(ListNode* head) {
    vector<int> v;
    ListNode* temp=head;
    while(temp!=NULL){
        v.push_back(temp->val);
        temp=temp->next;
    }
        int maxi=INT_MIN,n=v.size();
    for(int i=0;i<n;i++){
       maxi=max(maxi,v[i]+v[n-i-1]); 
    } 
        return maxi;
    }
};