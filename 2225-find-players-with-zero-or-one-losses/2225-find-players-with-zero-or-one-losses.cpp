class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> zero,one;
        map<int,int> m;
        for(int i=0;i<matches.size();i++){
        for(int j=0;j<2;j++){
            if(m.count(matches[i][j])==0)
           m[matches[i][j]]=0;
            if(j==1) m[matches[i][j]]++;
        }   
        }
        for(auto it:m){
            if(it.second==0) zero.push_back(it.first);
            if(it.second==1) one.push_back(it.first);
        }
        return {zero,one};
    }
};