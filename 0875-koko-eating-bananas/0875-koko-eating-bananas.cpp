class Solution {
bool solve(vector<int>& piles, int h,long long int mid){
   long long int sum=0,k=0;
    for(int i:piles){
         if(mid>=i) k++;
        else{
            int s=i/mid;
            if(i%mid>0) k+=s+1;
            else k+=s;  
            }   
        }
       if(k>h) return 0;
     
    return 1;
}
public:
 int minEatingSpeed(vector<int>& piles, int h) {
     long long int s=1,e=1e9,res;
     while(s<=e){
        long long int mid=s+(e-s)/2;
        if(solve(piles,h,mid)){
            res=mid;
            e=mid-1;
         }
         else s=mid+1;
     }
     return res;
     }
};