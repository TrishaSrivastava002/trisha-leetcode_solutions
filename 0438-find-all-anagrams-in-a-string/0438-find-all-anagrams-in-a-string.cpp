class Solution {
public:
vector<int> findAnagrams(string s, string p){ vector<int> v,v1(26,0),v2(26,0);
  int j=0,k=0,res=s.length();                                               
if(s.length()<p.length()) return v;
        
     for(int i=0;i<p.length();i++){
         v1[p[i]-'a']++;
         v2[s[i]-'a']++;
     }      
      if(v1==v2) v.push_back(0);                               
      
      for(int i=p.length();i<s.length();i++){
         v2[s[i-p.length()]-'a']--;
         v2[s[i]-'a']++;
          if(v1==v2) v.push_back(i-p.length()+1);
      }                                       
        return v;
    }
};