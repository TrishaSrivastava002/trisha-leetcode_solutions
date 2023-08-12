class Solution {
public:

int solve(vector<vector<int>>&oGrid, int i, int j,int m,int n, vector<vector<int>>&dp){
		if(i>=m || j>=n || oGrid[i][j]==1)
			return 0;
		if(i==m-1 && j==n-1)
			return 1;
		if(dp[i][j]!=-1)
			return dp[i][j];
     int r=solve(oGrid, i+1, j,m,n, dp);
    int l=solve(oGrid, i, j+1,m,n, dp);
		return dp[i][j] = l + r;
	}
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
		int m = obstacleGrid.size();
		int n = obstacleGrid[0].size();
		vector<vector<int>>dp(m, vector<int>(n, -1));
		return solve(obstacleGrid, 0, 0,m,n, dp);
	}
};