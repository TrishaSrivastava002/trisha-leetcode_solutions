class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
       //  int n=nums.size(),res=0;
       //  unordered_map<int,int> m[n];
       //  for(int i=1;i<n;i++){
       //  for(int j=0;j<i;j++){
       //     int d=nums[i]-nums[j];
       //     m[i][d]=max(m[i][d],m[j][d]+1);
       //     res=max(res,m[i][d]); 
       //  }    
       //  }
       // return res+1; 
        int n =nums.size();
        unordered_map<int,int> mp[n];
        int res = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                int diff = nums[j] - nums[i];
                mp[i][diff] = mp[j][diff] + 1;
                res = max(res, mp[i][diff]);
            }
        }
        return res + 1;
    }
};