class Solution {
public:
vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    vector<vector<int>> v;
    int c=0,n1=nums1.size(),n2=nums2.size();
    priority_queue<pair<int,pair<int,int>>> q;
    for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        int sum=nums1[i]+nums2[j];
        if(c<k){
         q.push({sum,{nums1[i],nums2[j]}});
         c++;
        }
        else if(sum<q.top().first){
           q.pop();
           q.push({sum,{nums1[i],nums2[j]}});
        }
        else break;
    }   
    }
    while(!q.empty()){
        int x=q.top().second.first,y=q.top().second.second;
        q.pop();
        v.push_back({x,y});
    }
    reverse(v.begin(),v.end());
    return v;
    }
};