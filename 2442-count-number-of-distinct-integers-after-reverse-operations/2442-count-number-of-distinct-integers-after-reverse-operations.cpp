class Solution {
    int reverse(int n) {
       long long int  sum=0, quo,rem;
    if(n>=2147483647 || n<= -2147483647){
        return 0;
    }
       if(n>0){
           quo=n;
           while(quo!=0){ 
    rem = quo%10;
    sum = sum*10 + rem;
               if(sum>=2147483647 || sum<= -2147483647){
        return 0;
    }
    quo = quo/10; }
   return sum;
    }
       
    else{
        n = -1*n;
        quo=n;
        while(quo!=0){ 
    rem = quo%10;
    sum = sum*10 + rem;
            if(sum>=2147483647 || sum<= -2147483647){
        return 0;
    }
    quo = quo/10; }
    sum= -1*sum;
        return sum;
    }
       
    }
public:
    int countDistinctIntegers(vector<int>& nums){  int k=0;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            s.insert(reverse(nums[i]));
        } 
    
        return s.size();
    }
};