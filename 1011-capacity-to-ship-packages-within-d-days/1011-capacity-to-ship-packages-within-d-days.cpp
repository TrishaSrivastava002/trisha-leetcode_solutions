class Solution {
bool solve(vector<int>& weights, int days,int mid){
    int sum=0,d=1;
    for(int it:weights){
        if(it>mid) return 0;
        sum+=it;
        if(sum>mid){ //stop moving the weight on that day and start the next day
            d++;
           sum=it;
        if(d>days) return 0;
        } 
      }
    return 1;
}
public:
int shipWithinDays(vector<int>& weights, int days){
    int s=0,e=1e8,res=INT_MAX;
    while(s<=e){
        int mid=(e+s)/2;
          if(solve(weights,days,mid)){
              res=min(res,mid);
              e=mid-1;   
          } 
            else s=mid+1;
        }
    return res;
    }
};