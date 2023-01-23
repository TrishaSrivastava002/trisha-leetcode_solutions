class Solution{ 
int solve(string s,int &i){
   int res=0,sign=1,num=0;
    for(;i<s.size();i++){
       if(s[i]==' ') continue;
       else if(s[i]=='+' || s[i]=='-'){
           res+=sign*num;
           num=0;
           sign=(s[i]=='+')?1:-1;
       }
       else if(s[i]=='(') res+=sign*solve(s,++i);       
       else if(s[i]==')') break;
        //when no. is >=10
        else num=num*10+(s[i]-'0');     
     }
   return res+sign*num;
}
public:
    int calculate(string s){ 
       int i=0;
     return solve(s,i);
    }
};

//  int res = 0;
//         int sign = 1; // '+'=1, '-'=-1
//         int number = 0;
        
//         for(;idx<s.size(); idx++){
//             char x=s[idx]; //current char

//             if(x==' ') continue;
//             else if(x=='+'||x=='-') {
//                 res+= sign*(number);
//                 number=0;
//                 sign = (x=='+')?1:-1;
//             }
//             else if(x=='(') res += sign*helper(s, ++idx);
//             else if(x==')') break;
//             else number = number*10+(x-'0');
//         }  
//         return res+sign*(number); 
