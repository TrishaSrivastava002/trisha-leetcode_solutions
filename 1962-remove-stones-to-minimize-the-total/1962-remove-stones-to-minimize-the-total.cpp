class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        int sum=0,n=piles.size();
        priority_queue<int> q;
        for(auto &it:piles) q.push(it);
        while(k-- && !q.empty()){
            int top=q.top();
            q.pop();
            top=top-floor(top/2);
            q.push(top);
        }
        while(!q.empty()){
          sum+=q.top();
            q.pop();
        } 
        return sum;
    }
};