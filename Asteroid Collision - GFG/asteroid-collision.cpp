//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        stack<int> s;
        for(int i=0;i<N;i++){
            if(s.empty()) s.push(asteroids[i]); 
            else if(s.top()>0 && asteroids[i]<0){
              if(abs(asteroids[i])>s.top()){
                  s.pop();
                  i--;
              } 
            else if(abs(asteroids[i])==abs(s.top())) s.pop();    
            }
            else s.push(asteroids[i]);
        }
        asteroids.clear();
        while(!s.empty()){
         asteroids.push_back(s.top());
         s.pop();
        }
        reverse(asteroids.begin(),asteroids.end());
        return asteroids;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends