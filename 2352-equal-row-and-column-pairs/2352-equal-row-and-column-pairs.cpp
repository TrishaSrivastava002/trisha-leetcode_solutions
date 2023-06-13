class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid[0].size(),res=0;
      vector<string> r,c;
        for(int i=0;i<n;i++){
            string row="";
        for(int j=0;j<n;j++){
            row+=to_string(grid[i][j]);
            row+=" ";
        } 
            r.push_back(row);
        }
        for(int i=0;i<n;i++){
            string col="";
        for(int j=0;j<n;j++){
            col+=to_string(grid[j][i]);
            col+=" ";
        } 
            c.push_back(col);
        }
        for(int i=0;i<r.size();i++){
        for(int j=0;j<c.size();j++){
            if(r[i]==c[j]) res++;
        }    
        }
        return res;
    }
};