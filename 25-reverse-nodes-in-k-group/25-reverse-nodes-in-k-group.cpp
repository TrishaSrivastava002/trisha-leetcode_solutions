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
    ListNode* reverseKGroup(ListNode* head, int k) {
         ListNode* temp = head;
        for(int i = 0;i<k;i++)
        {
            if(!temp)
            {
                return head;
            }
            temp = temp -> next;
        }
        if(head==NULL)
            return NULL;
        ListNode* coming= NULL;
        ListNode* now=head;
        ListNode* prev= NULL;
        int count=0;
        while(now!=NULL && count<k){
            coming = now->next;
            now->next=prev;
            prev=now;
            now=coming;
            count++;
        }
        if(coming!=NULL){
            head->next= reverseKGroup(coming, k);
        }
        return prev;
    }
};