class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int count = 0;
        int i = 0;
        while (i<flowerbed.size()) {
// Check if the current position is empty and its neighboring positions are also empty
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && 
            (i == flowerbed.size()-1 || flowerbed[i+1] == 0)) {
                flowerbed[i] = 1; // plant a flower at this position
                count++; // increment the count of planted flowers
            }
            if(count>=n) return true; // if the required number of flowers have been planted
                i++; // move to the next position
        }
        return false;
    }
};