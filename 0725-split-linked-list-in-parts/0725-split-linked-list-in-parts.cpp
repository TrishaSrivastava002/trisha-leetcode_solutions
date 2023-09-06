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
int length(ListNode* head){
    int c=0;
    while(head!=NULL){
       c++;
       head=head->next; 
    }
    return c;    
}    
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
    vector<ListNode*> v(k,NULL);    
    ListNode* temp=head;
    int len=length(head);
    int n=len/k,r=len%k,q=0;
    while(temp!=NULL){
        ListNode*c=temp;
        ListNode*dummy=new ListNode(-1);
        ListNode*curr=dummy;
        for(int i=0;i<n;i++){
           curr->next=new ListNode(temp->val);
           curr=curr->next; 
           temp=temp->next;
        }
        if(r>0){
           curr->next=new ListNode(temp->val);
           curr=curr->next; 
           temp=temp->next;
           r--; 
        }
        v[q]=dummy->next;
        q++;
    } 
        return v; 
    }
};