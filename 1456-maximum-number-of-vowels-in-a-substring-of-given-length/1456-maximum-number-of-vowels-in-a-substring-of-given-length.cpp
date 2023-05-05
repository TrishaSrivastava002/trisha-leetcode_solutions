class Solution {
public:
    int maxVowels(string s, int k) {
       int i=0,j=0,sum=0,n=s.length(),res=INT_MIN;
       unordered_map<char,int> m;
       for(int i=0;i<26;i++){
       if((i+'a'=='a') || (i+'a'=='e') || (i+'a'=='i') || (i+'a'=='o') ||         (i+'a'=='u')) m[i+'a']=1;
           else m[i+'a']=0;
       }
       while(i<n){
           sum+=m[s[i]];
           while(i-j+1>k){
              sum-=m[s[j]];
               j++;             
           }
          res=max(sum,res);
           i++;
       }
       return res;
    }
};