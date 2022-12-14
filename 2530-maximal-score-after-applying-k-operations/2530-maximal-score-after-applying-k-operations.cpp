class Solution {
public:
    long long maxKelements(vector<int>& nums, int k){
         long long ans=0;
        priority_queue<int> pq;
        for(auto i : nums) pq.push(i);
        while(k--){
            int x = pq.top();
            pq.pop();
            ans += x;
            pq.push(x-(2*x/3));
        }
        return ans;
    }
};