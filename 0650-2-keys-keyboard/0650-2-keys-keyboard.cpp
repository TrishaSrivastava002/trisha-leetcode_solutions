class Solution {
 int fun(int n,vector<int> &dp,int i){
        int sum=0,t=0,nt=0;
        if(i<=0) return 1e8;
        if(i==n) return sum;
        if(dp[i]!=-1) return dp[i];
        t+=i+fun(n,dp,i+1);
        nt+=fun(n,dp,i-1);
         return dp[i]=min(t,nt);
    }
int solve(int n,int i,int c){
    if(i==n) return 1;
     if(i>n) return INT_MAX/2;
//pasted the same letters and updated the copied  //pasted the last copied letters
    return min(2+solve(n,2*i,i),1+solve(n,i+c,c));
}
public:
int minSteps(int n){
    //   vector<int> dp(n+1,-1);
    // return solve(n,dp,1);
    if(n==1) return 0;
    return solve(n,1,1);
                 //new //copied no.of characters
    }
};