class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      /*  int k;
        int n=nums.size();
 for(int i=0;i<n;i++){
    k= max(k,nums[i]);
 }
 int countres[nums.size()] = {0};
 for(int i=0;i<n;i++){
  countres[nums[i]]++;
 }
 for(int i=1;i<=k;i++){
    countres[i]+=countres[i-1];
 }
 int output[n];
 for(int i=n-1;i>=0;i--){
    output[--countres[nums[i]]]+=nums[i];
 }
  for(int i=0;i<n;i++){
    nums[i]=output[[i]];
 } */
        sort(nums.begin(),nums.end());
        return nums;
    }
};