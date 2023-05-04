class Solution {
public:
    bool isIsomorphic(string s, string t){
      map<char,int> m1;
      map<char,int> m2;       
//       for(auto it:s) m1[it]++;
      
//       for(auto it:t) m2[it]++;
      
      for(int i=0;i<s.length();i++){
          if(m1[s[i]]!=m2[t[i]]) return 0;
          m1[s[i]]=i+1;
          m2[t[i]]=i+1;
      }
        return 1;
    }
};