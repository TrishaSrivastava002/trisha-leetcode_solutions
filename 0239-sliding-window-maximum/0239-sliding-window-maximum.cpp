class Solution {
public:
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     // O(n^2) Time complexity - TLE
    // for(int i=0;i<n-k+1;i++){
   //     int sum=INT_MIN;
    //    for(int j=i;j<i+k;j++) sum=max(sum,nums[j]);
   //      v.push_back(sum);
  // }
    vector<int> v;
    int n=nums.size(),i=0,j=0;
    list<int> l; //instead of list dequeue can also be used
    while(j<n){
        while(l.size()>0 && l.back()<nums[j]) l.pop_back();
        l.push_back(nums[j]);
        
        if(j-i+1<k) j++; // the size of subarray is less than k
        else if(j-i+1==k){
            v.push_back(l.front()); //l.front will contain the max no.
            if(l.front()==nums[i]) l.pop_front();
            i++;
            j++;
        }      
    }
    return v;
    }
};