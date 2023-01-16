class Solution {
string v[5]={"a","e","i","o","u"};
bool valid(string s){
        for(int i=1;i<s.length();i++){
          if(s[i-1]>s[i]) 
            return 0;
    }
    return 1;
}
long long int solve(int n,vector<int> &dp){
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    string s="";
    long long int sum=0;
    for(int i=0;i<5;i++){
        s+=v[i];
    if(valid(s)) sum+=solve(n-1,dp);   
    }
    return dp[n]=sum;
    }
public:
    int countVowelStrings(int n){
    //    vector<int> dp(n+1,-1);
    // return (int)solve(n,dp);
        return (n + 1) * (n + 2) * (n + 3) * (n + 4) / 24;
    }
};