class Solution {
public:
int hIndex(vector<int>& citations){
    int n=citations.size();
    sort(citations.begin(),citations.end(),greater());
    int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,min(citations[i],i+1));
        }
        return ans;
    }
};