class Solution {
public:
    int maxArea(vector<int>& height) {
        //Brute Force O(n^2) - gives TLE
        // for(int i=0;i<height.size();i++){
        //  for(int j=i+1;j<height.size();j++){
        //     sum=(j-i)*min(height[i],height[j]);
        //     maxi=max(maxi,sum);
        //     sum=0;
        // }   
        // }
        // return maxi;
        int maxi = INT_MIN,sum;
         int water=0, i=0, j=height.size()-1;
        while(i<j)
        {
            int h=min(height[i], height[j]);
            water=max(water,(j-i)*h);
            while(i<j && height[i]<=h)i++;
            while(i<j && height[j]<=h)j--;
        }
        return water; 
    }
};
