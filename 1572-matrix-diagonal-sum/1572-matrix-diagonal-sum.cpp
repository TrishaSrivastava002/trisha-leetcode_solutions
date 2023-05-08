class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int n = mat.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            // primary diagonal
            sum += mat[i][i]; 
            // neglect the central element
            if (i != n - i - 1) { 
                // secondary diagonal
                sum += mat[i][n - i - 1]; 
            }
        }
        return sum; 
    }
};