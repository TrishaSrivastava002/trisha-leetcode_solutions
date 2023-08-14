class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> h;
        for(int i=0;i<nums.size();i++)
            h.push(nums[i]);
        for(int i=1;i<k;i++)
            h.pop();
        return h.top();
    }
};