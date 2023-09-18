class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        /*
        vector<int> v;
        vector<int> v1;
        int sum,max=INT_MAX;
        int row = mat.size();
         int col = mat[0].size();
        for(int i=0;i<row;i++){
              sum=0;
            for(int j=0;j<col;j++)
                 sum+=mat[i][j];   
              if(sum<max)
           v.push_back(sum);    
}
       
        for(int i=0;i<k;i++){
            
        }
        return v1;
    }
    */
        vector<pair<int,int>> ans;
        for(int i=0; i<mat.size(); i++) {
            int c = 0;
            for(int j=0; j<mat[0].size(); j++) {
                if(mat[i][j] == 1) 
                    c++;
            }
            ans.push_back({i, c});
        }
        
        sort(ans.begin(), ans.end(), [](pair<int, int> a, pair<int, int> b) {
            if(a.second < b.second)
                return true;
            if(a.first < b.first and a.second==b.second)
                return true;
            return false;
        });
        
        vector<int> an(k);
        for(int i=0; i<k; i++) {
            an[i] = ans[i].first;
        }
        
        return an;
    }
};