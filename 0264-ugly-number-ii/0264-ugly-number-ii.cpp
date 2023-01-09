class Solution {
public:
int nthUglyNumber(int n){
     if(n==1) return 1;
     vector<int> v(n);
    int w=0,t=0,f=0;
    v[0]=1;//the 1st ugly number
    for(int i=1;i<n;i++){
      v[i]=min({v[w]*2,v[t]*3,v[f]*5});
      if(v[i]==v[w]*2) w++;
      if(v[i]==v[t]*3) t++;
      if(v[i]==v[f]*5) f++;  
    }
 return v[n-1];
    }
};