class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int> m;
        int k=0;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]=1+m[arr[i]-difference];
            k=max(k,m[arr[i]]);
        }
        return k;
    }
};