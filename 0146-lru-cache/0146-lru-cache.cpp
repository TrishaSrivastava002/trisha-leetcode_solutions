class LRUCache{
    int c;
    unordered_map<int,pair<list<int>::iterator,int>> m;
    list<int> l;
public:
    LRUCache(int capacity){
       c=capacity; 
    }
    void solve(int key){
        l.erase(m[key].first);
        l.push_front(key);
        m[key].first=l.begin();
       
    }
    int get(int key){
       if(m.find(key)==m.end()) return -1;
        solve(key);
        return m[key].second;
    }
    void put(int key, int value){
       if(m.find(key)!=m.end()){
         m[key].second=value;
         solve(key);
       } 
       else{
           //if not already present in the list
         l.push_front(key);
         m[key]={l.begin(),value};
           c--;
       }
        if(c<0){
          m.erase(l.back()); // erase from the map
          l.pop_back();//erase the front of list if size increases more than capacity 
          c++;
       } 
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */