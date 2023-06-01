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
    ListNode* partition(ListNode* head, int x) {
    ListNode* n=head;
    ListNode* h1=head;
    vector<int> s,h;
    while(n){
      if(n->val<x) s.push_back(n->val); 
      else h.push_back(n->val);
      n=n->next;
    }
    for(auto z:s){
       h1->val=z;
       h1=h1->next;
    }
    for(auto y:h){
       h1->val=y;
       h1=h1->next;
    }    
    return head;   
    }
};