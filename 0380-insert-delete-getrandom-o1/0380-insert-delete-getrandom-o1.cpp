class RandomizedSet {
    unordered_map<int,int> m;
    vector<int> v;
public:
    RandomizedSet() {
        
    }  
    bool insert(int val) {
       if(m.find(val)!=m.end()){
           return 0;
       }
        else{
          v.push_back(val);
         m[val]=v.size()-1;
            return 1;
        } 
    }  
    bool remove(int val) {
      if(m.find(val)!=m.end()){
          int last=v.back();
    v[m[val]]=v.back();// m[val] locates the index of val in the array vector.     
// Then we copy array last element value to the val location in the array
    v.pop_back();	// Delete the last element of the array 
    m[last]=m[val];	//assign index of val in array to the index of the last element   
    m.erase(val);   
          return 1;
      }
        return 0;
    }
    
    int getRandom() {
       return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */