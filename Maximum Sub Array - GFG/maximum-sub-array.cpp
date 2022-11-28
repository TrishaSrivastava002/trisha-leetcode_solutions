//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n){
	vector<int> v;
     int x=-1,y=-1;
     int s=0,ans=0,sum=0;

     for(int i=0;i<n;i++){
         if(a[i]<0){ 
             x=i+1; 
             sum=0;
         }
     else  sum=sum+a[i];

     if(sum>=ans){
             s=max(s,x);
             ans=sum;
             y=i;
         }
     }

     for(int i=s;i<=y;i++) v.push_back(a[i]);
     
     if(v.size()==0) return {-1};

     return v; 
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends