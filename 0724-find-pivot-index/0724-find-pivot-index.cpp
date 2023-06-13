class Solution {
public:
    int pivotIndex(vector<int>& nums){
        int s=0,n=nums.size(),e=n-1,sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            if(i==0) sum1=0;
            else  sum1+=nums[i-1];
            sum2=0;
        for(int j=i+1;j<n;j++){
         sum2+=nums[j];
            
        }
            if(sum1==sum2) return i;
        }
        return -1;      
    }
};