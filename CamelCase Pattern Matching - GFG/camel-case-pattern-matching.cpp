//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        unordered_map<string,vector<string>>data;
        for(int i=0;i<N;i++)
        {
            string temp;
            for(int j=0;j<Dictionary[i].size();j++)
            {
                if(Dictionary[i][j]>='A' && Dictionary[i][j]<='Z')
                {
                    temp.push_back(Dictionary[i][j]);
                }
            }
            
            if(temp.size()>0)
            {
                data[temp].push_back(Dictionary[i]);
            }
            
        }
        
         unordered_map<string,vector<string>>::iterator it =data.begin();
          vector<string> ans;
         while(it != data.end())
         {
             string temp=it->first;
             int i;
             for( i=0;i<temp.size();i++)
             {
                 if(i<Pattern.size())
                 {
                     if(Pattern[i]!=temp[i])
                     break;
                 }
                 else
                 {
                     break;
                 }
                 
             }
             
             if(i==Pattern.size())
             {
                 for(int i=0;i<it->second.size();i++)
                 {
                     ans.push_back(it->second[i]);
                 }
             }
             
             it++ ;
         }
       
       
        if(ans.size()==0)
        {
            ans.push_back("-1");
            return ans ;
        }
       
        sort(ans.begin(),ans.end());
        
        return ans ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends