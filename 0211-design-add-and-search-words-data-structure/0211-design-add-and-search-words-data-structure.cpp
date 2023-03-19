class TrieNode{
public:
    TrieNode *child[26];
    bool end = false;
    TrieNode(){
        for(int i=0;i<26;i++) child[i] = NULL;
    }
};
class WordDictionary{
    TrieNode *root;
public:
    WordDictionary(){
       root=new TrieNode();
    }  
    void addWord(string word){
        TrieNode *node=root;
       for(int i=0;i<word.size();i++){
        if(!node->child[word[i]-'a']) node->child[word[i]-'a']=new TrieNode();  
           
        node=node->child[word[i]-'a'];    
       }
        node->end=1;
    } 
    bool solve(string &word,int i,TrieNode *node){
    if(!node) return 0;
    if(i==word.size()) return node->end;
    if(word[i]!='.') return solve(word,i+1,node->child[word[i]-'a']);
    
    for(int j=0;j<26;j++){ 
    // to find the first alphabet of the word in the trie having all 26 alphabet
        if(solve(word,i+1,node->child[j])) return 1;
    } 
    return 0;
 }
    bool search(string word){
         TrieNode *node=root;
       return solve(word,0,node); 
    }
};
