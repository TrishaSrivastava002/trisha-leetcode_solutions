class Solution {
public:
    int countOdds(int low, int high) {
        int sum=(high-low)/2;
        if(high%2==1 || low%2==1) sum++;
        return sum;
    }
};