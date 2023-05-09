class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row= matrix.size();
         int col= matrix[0].size();
        int count=0;
        int total = row*col;
        int srow=0,scol=0,erow=row-1,ecol=col-1;
        while(count<total){
           for(int index=scol;index<=ecol && count<total;index++){
               ans.push_back(matrix[srow][index]);   
               count++;
}
         srow++;   
            for(int index=srow;index<=erow && count<total;index++){
               ans.push_back(matrix[index][ecol]); 
                count++;
}
         ecol--;   
             for(int index=ecol;index>=scol && count<total;index--){
               ans.push_back(matrix[erow][index]); 
                 count++;
}
        erow--;   
            for(int index=erow;index>=srow && count<total;index--){
               ans.push_back(matrix[index][scol]); 
                count++;
}
        scol++;   
        }
        return ans;
    }
};