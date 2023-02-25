class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini = prices[0];
        int maxi= 0;
        int k=0;
        int p=prices.size();
        for(int i=0;i<p;i++){ 
            if(prices[i]<mini)
                mini=prices[i];
            maxi=max(prices[i]-mini,maxi);
        }
        return maxi;
    }
};