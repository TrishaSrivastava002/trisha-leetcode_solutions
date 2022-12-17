class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<long long> s;
    for(int i=0;i<tokens.size();i++){
        if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
            if(!s.empty()){
                long long z;
            long long x=s.top();
                s.pop();
            long long y=s.top();
                s.pop();
                if(tokens[i]=="+") z=(x+y);
                else if(tokens[i]=="-") z=(y-x);
                else if(tokens[i]=="*") z=(x*y);
                else if(tokens[i]=="/") z=(y/x);
                s.push(z);
            }
            
        }
        else s.push(stoi(tokens[i]));   
    }
        return s.top();
    }
};