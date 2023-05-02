//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
  public:
  map<Node*,Node*> m;
  map<Node*,int> vis;
    int solve(Node* root,map<Node*,Node*> &m){
      int x=0;
        queue<Node*> q;
        map<Node*,int> vis;
        vis[root]=1;
        q.push(root);
         while(!q.empty()){
             int fl=0;
            int n=q.size();
            for(int i=0;i<n;i++){
              Node* node=q.front();
              q.pop();
              if(node->left && vis[node->left]==0){
                  fl=1;
                  vis[node->left]=1;
                  q.push(node->left);
              }
              if(node->right && vis[node->right]==0){
                  fl=1;
                  vis[node->right]=1;
                  q.push(node->right);
              }
              if(m[node] && vis[m[node]]==0){
                  fl=1;
                  vis[m[node]]=1;
                  q.push(m[node]);
              }
            }
           if(fl) x++; 
        }
        return x;
    }
    int minTime(Node* root, int target){ 
        int x=0;
        queue<Node*> q;
        map<Node*,Node*> m;
        m[root]=NULL;
        q.push(root);
        while(!q.empty()){
            Node* node=q.front();
            q.pop();
          if(node->data==target) return solve(node,m);
          if(node->left){
            m[node->left]=node;
            q.push(node->left);  
          } 
          if(node->right){
            m[node->right]=node;
            q.push(node->right);  
          } 
        }
        return x;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends