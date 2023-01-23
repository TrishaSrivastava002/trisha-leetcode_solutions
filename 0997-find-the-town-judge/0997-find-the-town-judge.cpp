class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
      vector<int> v1(n+1,0);
      vector<int> v2(n+1,0);
        
    for(auto it:trust){
        v1[it[1]]++;
        v2[it[0]]++;
    }
    for(int i=1;i<=n;i++){
        if(v1[i]==n-1 && v2[i]==0) return i;
    }
        return -1;
    }
};