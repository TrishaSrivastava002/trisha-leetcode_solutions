class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
      vector<vector<string>> v;
      if(strs.size()==1)
        return {strs};
        unordered_map<string,int> m;
  for(string s:strs){
        string temp=s;
        sort(temp.begin(),temp.end());
        if(m.find(temp)==m.end()){
          m[temp]=v.size();
          v.push_back({s});
        }
          else
          v[m[temp]].push_back(s);
      }
     return v;    
    }
};