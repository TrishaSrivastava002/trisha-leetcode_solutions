class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0,res=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            res=max(sum,res);
        }
        return res;
    }
};