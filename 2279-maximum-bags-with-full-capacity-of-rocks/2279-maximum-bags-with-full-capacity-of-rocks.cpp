class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> v;
        int k=0,sum=0,n=rocks.size();
       for(int i=0;i<n;i++){
       rocks[i]=capacity[i]-rocks[i];
    }
    sort(rocks.begin(),rocks.end());
    for(int i=0;i<n;i++){
        sum+=rocks[i];
        if(sum>additionalRocks) break;
        else k++;
        }
    return k;
    }
};