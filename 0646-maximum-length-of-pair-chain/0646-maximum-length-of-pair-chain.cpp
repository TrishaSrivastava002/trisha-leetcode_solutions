class Solution {
    static bool cmp(vector<int> a,vector<int> b){
       return a[1]<b[1]; 
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
       int n=pairs.size(),mini=0;
       // vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        sort(pairs.begin(),pairs.end(),cmp);
        int k=1,j=0;    
        for(int i=1;i<n;i++){ 
            if(pairs[j][1]<pairs[i][0]){
              j=i;
              k++;  
            }
    //no need to specifically find max as we have to select in sorted order   
        }
       return k; 
    }
};