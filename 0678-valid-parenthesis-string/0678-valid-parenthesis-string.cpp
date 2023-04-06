class Solution {
public:
    bool checkValidString(string s) {
      stack<int> o,a;
      for(int i=0;i<s.length();i++){
          if(s[i]=='(') o.push(i);
          else if(s[i]=='*') a.push(i);
          else{
              if(!o.empty()) o.pop();
              else if(!a.empty()) a.pop();
              else return 0;
          }
      }
          while(!o.empty() && !a.empty() && o.top()<a.top()){
              o.pop();
              a.pop();
          }
      return o.empty();
    }
};