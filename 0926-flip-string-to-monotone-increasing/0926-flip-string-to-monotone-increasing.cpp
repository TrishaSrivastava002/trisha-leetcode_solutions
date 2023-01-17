class Solution {
    int n;
int solve(string s,vector<int> &dp,int i){
   if(i>=n) return 0;
    if(i>=1){
       if(s[i]!=s[i-1])return 1;  
    }
    if(dp[i]!=-1) return dp[i];
    for(int j=i;j<n;j++)
    dp[j]=1+dp[j-1];
    return dp[i];
 }
public:
    int minFlipsMonoIncr(string s){
    //    n=s.length();
    //    int k=0,mini=INT_MIN;
    //    vector<int> dp(n,-1);
    // return solve(s,dp,0);
        int count_flip = 0, count_one = 0;
        for (auto i : s)
        { 
 //keep track of all one (we will use count_one in else condition if we need)  
//if we want flip one into 0
            if (i == '1') count_one++;
            else count_flip++;
            
           count_flip = min(count_flip, count_one);
        }
        
        return count_flip;
    }
};