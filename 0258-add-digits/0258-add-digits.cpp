class Solution {
public:
    int addDigits(int num) {
        int sum=0,n;
        if(num==0)
            return 0;
        while(num!=0){
            n=num%10;
            sum+=n;
            num=num/10;
          
      
        }
         if(sum>=1 && sum<=9)
            return sum;
        
          return addDigits(sum);  
        
    }
};