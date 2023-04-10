class Solution {
public:
    bool isValid(string s) {
        stack <char> v;
        if(s.length()%2!=0)
            return false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                v.push(s[i]);
            else{ 
            if(v.empty())
                return false;
           else if(s[i]==')' && v.top()!='(')
                return false;
           else if(s[i]=='}' && v.top()!='{')
                return false;
           else if(s[i]==']' && v.top()!='[')
                return false; 
           else
                v.pop();
        } }
        if(!v.empty())
           return false;  
        
        return true;
        
    }
};
