//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    bool safe(int j,bool graph[101][101],int n,int col,int color[]){
    for(int i=0;i<n;i++){
            if(color[i]==col && i!=j && graph[i][j]==1) return 0; 
            }
    return 1;
    }
    bool solve(int j,bool graph[101][101],int m,int n,int color[]){
        if(j==n) return 1;
        for(int i=1;i<=m;i++){
        if(safe(j,graph,n,i,color)){
           color[j]=i;
        if(solve(j+1,graph,m,n,color)) return 1;
        else color[j]=0;
        }   
        } 
    return 0;
    }
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n){
       int color[n]={0};
       if(solve(0,graph,m,n,color)) return 1;
       return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends