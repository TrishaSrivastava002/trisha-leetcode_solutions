class Solution {
long long int solve(vector<vector<int>>& ques,vector<long long int> &dp,int i){
    if(i>=ques.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    long long int sum=0;
    sum=max(solve(ques,dp,i+1),ques[i][0]+solve(ques,dp,i+ques[i][1]+1));
    return dp[i]=sum; 
    // return sum;
    }
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size(),m=questions[0].size();
        vector<long long int> dp(n,-1);
        return solve(questions,dp,0);
    }
};