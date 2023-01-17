class Solution {
int opt(int x,int y,char sym){
    if(sym=='+') return x+y;
    if(sym=='-') return x-y;
    if(sym=='*') return x*y;
    return 0;
}
public:
vector<int> diffWaysToCompute(string expression){
     int n=expression.size();
    bool ans=0;
     vector<int> v;
    for(int i=0;i<n;i++){
        int sum=0;
      if(!isdigit(expression[i])){
          ans=1;
           vector<int> v1=diffWaysToCompute(expression.substr(0,i));
           vector<int> v2=diffWaysToCompute(expression.substr(i+1)); 
    for(int x:v1){
    for(int y:v2){
        int k=opt(x,y,expression[i]);
        v.push_back(k); 
    }    
    }
      }
      }
    if(ans==0) v.push_back(stoi(expression));
    return v;
    }
};