class Solution {
public:
 int minimumRounds(vector<int>& tasks){
    int n=tasks.size(),k=0;
    unordered_map<int,int> m;
     
     for(int i=0;i<n;i++){
         m[tasks[i]]++; 
     }
     for(auto &it:m){
       if(it.second<2) return -1;
       if(it.second%3==0) k+=(it.second/3);
       else k+=(it.second/3)+1;  
     }
      return k;
    }
};