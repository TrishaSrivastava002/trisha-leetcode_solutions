class Solution {
   void solve(int n, int k,vector<int> &v,vector<vector<int>> &v1,int i){
       if(k==v.size()){
           v1.push_back(v);
           return ;
       }
     for(int j=i;j<=n;j++){
          v.push_back(j);
       solve(n,k,v,v1,j+1);
         v.pop_back();
     }
      
   }
public:
    vector<vector<int>> combine(int n, int k) {
     vector<vector<int>> v1;  
        vector<int> v;
        /*
          if (vec.size() == k){ //base-case
            output.push_back(vec);
            return;
        }
        
        for (int j=curr; j<=n; j++){ //explore candidates
            vec.push_back(j); // make move            
            backtrack(j+1,n,k,output,vec); // backtrack     
            vec.pop_back(); // undo move
        }        
    
        if(n==1 && k==1){
            v.push_back(n);
            v1.push_back(v);
            return v1;
        }
      for(int i=1;i<=n;i++){
           int s=0;
        for(int j=i+1;j<=n;j++){
            if(s<k){
                v.push_back(i);
               v.push_back(j); 
                s++;
            }
            v1.push_back(v);
            v.clear();
      }   
      }
        return v1;
        */
        solve(n,k,v,v1,1);
        return v1;
    }
};