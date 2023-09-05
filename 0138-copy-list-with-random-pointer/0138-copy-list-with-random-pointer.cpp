class Solution {
void insertattail(Node* &head,Node* &tail,int data){
    Node* newnode = new Node(data);
    if(head==NULL){
      head= newnode;
      tail= newnode;
        return ;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }     
}
public:
    Node* copyRandomList(Node* head) {
        Node* clonehead = NULL;
        Node* clonetail = NULL;
        
        Node* temp=head;
        while(temp!=NULL){
            insertattail(clonehead,clonetail,temp->val);
            temp=temp->next;
        }
        unordered_map<Node*,Node*> oldtonew;
        Node *original=head;
        Node *clone= clonehead;
        while(original!=NULL && clone!=NULL){
            oldtonew[original]=clone;
            original= original->next;
            clone= clone->next;
        }
        original=head;
       clone=clonehead;
        while(original!=NULL){
           clone->random=oldtonew[original->random];
            original= original->next;
            clone= clone->next;
        }
        return clonehead;
    }
};