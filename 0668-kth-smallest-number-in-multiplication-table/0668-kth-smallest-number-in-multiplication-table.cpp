class Solution{
int solve(int m, int n, int k,int mid){
    int c=0,i=m,j=1;
   while(i>=1 && j<=n){ 
      if(i*j<=mid){
 c+=i;//if it's smaller than i then it is greater for the rest of the values of i
          j++;
      } 
      else i--;
   }    
    return c;
}
public:
int findKthNumber(int m, int n, int k){
    long long int s=1,e=m*n;
    int res;
    while(s<=e){
       int mid=s+(e-s)/2;
     if(solve(m,n,k,mid)>=k){
           res=mid;
           e=mid-1;
    }
     else s=mid+1;
    }
    return res;
    }
};