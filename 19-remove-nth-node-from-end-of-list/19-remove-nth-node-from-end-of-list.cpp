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
        int k=0;
        ListNode*temp = head;
        while(temp!=NULL){
            k++;
            temp=temp->next;
        }
        return k;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL)
            return NULL;
         int len= getlength(head);
        int pos= len-n;
        int con=0;
        if(pos==0)
            return head->next;
         ListNode*temp = head;
        while(con<pos-1 && temp!=NULL){
                 con++;
            temp=temp->next;
          }
     
        temp->next=temp->next->next;
        return head;
    }
};