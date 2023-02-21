class Solution {
public:
    int getSum(int a, int b){
       int carry;
        while (b!=0){
//does'nt matter if a!=0 coz we're performing xor so all the 1's in a will automatically get included in b
            carry = a&b;
            a = a^b;//a stores the sum with carry addition
            b =(unsigned int)carry<<1;//b stores carry in the right position
        }
        return a;
    }
};