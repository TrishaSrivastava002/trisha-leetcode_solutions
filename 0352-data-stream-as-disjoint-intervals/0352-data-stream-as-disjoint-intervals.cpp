class SummaryRanges {
public:
    set<int> nums;
    
    void addNum(int value) {
        nums.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> result;

        for(const int& num : nums) {
            if(not result.empty() and result.back()[1] == num-1) {
                result.back()[1]++;
            }
            else result.push_back({num, num});
        }

        return result;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */