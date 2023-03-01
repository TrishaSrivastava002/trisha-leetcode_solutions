class Solution {
public:
    long long smallestNumber(long long num) {
      if(num<=0){
        priority_queue<int,vector<int>,greater<int>> q;
        while(num!=0){
          q.push(num%10);
            num/=10;
         }
        long long res=0;
        while(!q.empty()){
            res=res*10+q.top();
            q.pop();
         }
          return res;
         }
         string s=to_string(num);
          sort(s.begin(),s.end());
          int i=1;
         while(s[0]=='0') swap(s[0],s[i++]);  
        return stoll(s);
    }
};