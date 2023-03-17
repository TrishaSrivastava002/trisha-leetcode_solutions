 struct node{
        node* s[26];
        bool end=0;
    };
class Trie {
public:
    Trie() {     }
    
    node* root= new node();
    
void insert(string word){
       node* temp= root; 
        for(auto i:word){
            if(temp->s[i-'a']) temp=temp->s[i-'a'];
            else{
                temp->s[i-'a']=new node();
                temp=temp->s[i-'a'];
            }
        }
    temp->end=1;
    }
bool search(string word) {
       node* temp= root; 
        for(auto i:word){
            if(!temp->s[i-'a']) return 0;
            temp=temp->s[i-'a'];
        }
        if(temp->end) return 1;
        return 0;
    }
    
    bool startsWith(string prefix) {
       node*temp= root;
        for(auto i:prefix){
            if(!temp->s[i-'a']) return 0;
            temp=temp->s[i-'a'];
        }
        return 1;
    }
};
