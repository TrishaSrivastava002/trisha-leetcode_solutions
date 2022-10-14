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
     int getlength(ListNode* head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
public:
    ListNode* deleteMiddle(ListNode* head) {
         int k= getlength(head);
        ListNode* p=NULL;
        if(k==1)
            return p;
       ListNode* ptr=head;
            k=k/2;
        int l=0;
        while(l<k-1){
            ptr=ptr->next;
            l++;
            
        }
        ptr->next=ptr->next->next; 
        
        return head;
    }
};