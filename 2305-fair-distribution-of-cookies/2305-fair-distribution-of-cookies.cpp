class Solution {
    int s=INT_MAX;
   void solve(vector<int>& cookies, int k,vector<int> &v,int i){
       if(i==cookies.size()){
           int ans=INT_MIN;
       for(int j=0;j<k;j++){
          ans=max(ans,v[j]); 
       }
       s=min(s,ans);
       return ;     
       }
       for(int j=0;j<k;j++){
           v[j]+=cookies[i];
           solve(cookies,k,v,i+1);    
           v[j]-=cookies[i];
       }
   } 
public:
    int distributeCookies(vector<int>& cookies, int k) {
    vector<int> v(k);
    int sum=0;
    sum=accumulate(cookies.begin(),cookies.end(),sum);    
    solve(cookies,k,v,0);    
    return s;    
    }
};