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
    int k=1;
    ListNode* temp=head;
    while(temp!=NULL){
        k++;
        temp=temp->next;
    }
    return k;
}
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL)
            return head;
        vector<int> v;
        int n= getlength(head);
        int s= n-k;
         ListNode* temp1=head;
        ListNode* temp2=head;
       
        for(int i=1;i<k;i++){
             temp1=temp1->next;
        }
         for(int i=1;i<s;i++){
          temp2=temp2->next;   
         }
            
        int h = temp1->val;
        temp1->val=temp2->val;
        temp2->val=h;
        return head;
        
    }
};