//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n)
    { 
        int maxx =INT_MIN,maxxx =INT_MIN;
        int minn =INT_MAX,minnn =INT_MAX;

        for(int i=0;i<n;i++){
            maxx = max(maxx,arr[i]-i);//becoz of modulus we take both arr[i] +/- i
            maxxx = max(maxxx,arr[i]+i);
            minn = min(minn,arr[i]-i);
            minnn = min(minnn,arr[i]+i);
        }
        return max(maxx-minn,maxxx-minnn);
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends