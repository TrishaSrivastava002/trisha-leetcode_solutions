//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
int f(int arr[],int idx,int totalSum,int sum,vector<vector<int>>& dp) {
	    if(idx>=dp.size()) {
	        return abs((totalSum-sum)-sum);
	    }
	    
	    if(dp[idx][sum]!=-1) return dp[idx][sum];
	    
	    int f1 = f(arr,idx+1,totalSum,sum+arr[idx],dp);
	    int f2 = f(arr,idx+1,totalSum,sum,dp);
	    
	    return dp[idx][sum]=min(f1,f2);
	}
  public:
	int minDifference(int arr[], int n){ 
	   int totalSum =0;
	    for(int i=0;i<n;i++) totalSum+=arr[i];
	
	    vector<vector<int>> dp(n,vector<int>(totalSum+1,-1));
	    return f(arr,0,totalSum,0,dp);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends