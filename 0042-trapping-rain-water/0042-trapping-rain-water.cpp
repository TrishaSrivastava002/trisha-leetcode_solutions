class Solution {
public:
    int trap(vector<int>& height){
      int sum=0,n=height.size(),low[n],high[n];
        low[0]=height[0];
      for(int i=1;i<n;i++){
          low[i]=max(height[i],low[i-1]);
      }
       high[n-1]=height[n-1];
         for(int i=n-2;i>=0;i--){
          high[i]=max(height[i],high[i+1]);
      }
        for(int i=0;i<n;i++){
          sum+=min(high[i],low[i])-height[i];  
        }
      return sum;
    }
};