//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    int a[26]={0};
		    int sum=INT_MIN,j=0;
		    for(int i=0;i<s.length();i++){
		        sum=max(sum,++a[s[i]-'A']);
		      if(i-j+1-sum>k){
		        a[s[j++]-'A']--;
		      }  
		    }
		    return s.length()-j;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends