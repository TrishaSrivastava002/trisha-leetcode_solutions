class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) { int n=costs.size(),sum=0,k=0;
       sort(costs.begin(),costs.end());
      for(int i=0;i<n;i++){
          sum+=costs[i];
          if(sum<=coins){
              k++;
          }
          else break;
      }
    return k;
    }
};