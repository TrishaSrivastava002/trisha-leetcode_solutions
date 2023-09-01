class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        v.push_back(0);
       for(int i=1;i<=n;i++){
           int sum=0,k=i;    
           while(k!=0){
        sum+=k%2;
         k=k/2;
           }
           v.push_back(sum);
       }   
        return v;
    }
};