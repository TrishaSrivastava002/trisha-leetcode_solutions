class Solution{
bool solve(vector<int>& bloomDay, int m, int k,int mid){
    int sum=0;
    for(int i:bloomDay){
       if(i<=mid){
         sum++;
       if(sum==k){
           sum=0;
           m--;
       }   
       } 
        //for non-consecutive adjacent flowers from the garden
       else sum=0;
        if(m==0) return 1;
      }
    return 0;
    }
public:
int minDays(vector<int>& bloomDay, int m, int k){
    int n=bloomDay.size();
    int s=0;
    int e=*max_element(bloomDay.begin(),bloomDay.end()),res=-1;
    while(s<=e){
      int mid=s+(e-s)/2;
    if(solve(bloomDay,m,k,mid)){
         res=mid;
         e=mid-1;
    }
    else s=mid+1;
    }
    return res;
    }
};