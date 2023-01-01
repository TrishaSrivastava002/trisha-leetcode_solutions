class Solution {
public:
bool wordPattern(string pattern, string s){  
    int n=s.length(),p=pattern.size();
    vector<string> v;
    unordered_map<char,string> m; 
      
    // for(int i=0;i<n;i++){
    //  string k="";
    //  if(s[i]!=' ') k+=s[i++];
    //  else{
    //      v.push_back(k);
    //       k="";  
    //     }     
    //  }
    string word;
        stringstream iss(s);
        while (iss >> word)
        v.push_back(word);
    set<string> str;
    if(v.size()!=p) return 0;
    for(int i=0;i<p;i++){
       if(m.find(pattern[i])!=m.end()){ //v[i] is present
          if (m[pattern[i]] != v[i]) return 0;    
       }
       else{
         if(str.count(v[i])>0) return 0;
           m[pattern[i]]=v[i];
           str.insert(v[i]);  
       }
    }
        return 1;
    }
};