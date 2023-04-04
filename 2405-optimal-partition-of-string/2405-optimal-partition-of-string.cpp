class Solution {
public:
    int partitionString(string s) {
        int n=s.length(),ans=1;
       unordered_set<char> c;
       for(int i=0;i<n;i++){
         if(c.find(s[i])!=c.end()){
             ans++;
             c.clear();
         }
            c.insert(s[i]);  
       }
        return ans;
    }
};