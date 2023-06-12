class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    int n=nums.size();
    vector<string> v;
    for(int i=0;i<n;i++){
       string k="";
       int j=i;
       while(j+1<n && nums[j+1]==(nums[j]+1)) j++;
       if(j>i){
           k=to_string(nums[i])+"->"+to_string(nums[j]);
           v.push_back(k); 
        }
       else v.push_back(to_string(nums[j]));
        i=j;
    }    
        return v;
    }
};