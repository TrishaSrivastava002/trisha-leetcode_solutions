class Solution {
public: 
stack<string> st;
 string reverseWords(string s){ 
        string res="";
      
for(int i=0;i<s.length();i++){
    if(s[i]==32) continue;
    
   if(s[i]!=32){
       string sum="";
         int j=i;
    while(s[j]!=32 && j<s.length()) sum+=s[j++];
            i=j;
          st.push(sum);      
    }  
    }
     while(!st.empty()){
            res+=st.top();
            res+=" ";
            st.pop();
        }
     res=res.substr(0,res.length()-1);
     return res;
    }
};