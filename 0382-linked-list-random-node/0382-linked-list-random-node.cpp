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
    ListNode* node;
    int len=0;
public:
    Solution(ListNode* head){
        node=head;
       ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
    }
    
    int getRandom(){
       int r=rand()%len;
        ListNode* node1=node;
        for(int i=0;i<r;i++){
            node1=node1->next;
        }
        return node1->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */