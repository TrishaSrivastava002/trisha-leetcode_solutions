//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
    vector<vector<string>> v;
    unordered_map<string,int> m;
    for(auto s:string_list){
        string t=s;
        sort(t.begin(),t.end());
        if(m.find(t)==m.end()){
            m[t]=v.size();
            v.push_back({s});
        }
        else{
            v[m[t]].push_back(s);
        }
    }
    return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends