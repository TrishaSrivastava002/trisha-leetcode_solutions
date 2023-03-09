
class Solution {
   ListNode * floydloop(ListNode *head){
  if(head==NULL)
    return NULL;
  ListNode *slow=head;
  ListNode* fast= head;
  while(slow!=NULL &&fast!=NULL){
    fast=fast->next;
      if(fast!=NULL){
           fast=fast->next;
        }
        else{
            break;
        }
    slow=slow->next;
    if(slow==fast)
        return slow;
  }
  return NULL;
 }
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
       
    ListNode *intersection= floydloop(head);
        if(intersection){
    ListNode* slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
    }
    return NULL;
     
    }
};