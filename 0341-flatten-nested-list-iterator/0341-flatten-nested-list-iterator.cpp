/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
    int i=0;
    vector<int> v;
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
       solve(nestedList);
    }
    void solve(vector<NestedInteger> nl){
        for(auto j:nl){
          if(j.isInteger()) v.push_back(j.getInteger());
          else solve(j.getList());
      } 
    }
    int next(){
      return v[i++];
    }
    
    bool hasNext() {
      return i<v.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */