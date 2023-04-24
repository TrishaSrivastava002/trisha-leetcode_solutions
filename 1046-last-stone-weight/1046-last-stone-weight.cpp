class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++)
            pq.push(stones[i]);
        while(pq.size()!=1 && !pq.empty())
        {
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x>y)
                pq.push(x-y);
            else
                pq.push(y-x);
        }
        
        return pq.top();
    }
};