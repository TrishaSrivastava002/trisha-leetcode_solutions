class Solution {
  static bool cmp(int &a, int &b){
      string a1=to_string(a);
      string b1=to_string(b);
      int n=a1.length(),m=b1.length(),i=0,j=0;
     while(i<n || j<m){
        if(a1[i]==b1[j]){
            i++;
            j++;
        }
        else break;
     }
      if(i<n && j<m) return a1[i]>b1[j];
      return a1+b1>b1+a1;
  }
public:
    string largestNumber(vector<int>& nums) {
       sort(nums.begin(), nums.end(), cmp);
        if(count(nums.begin(), nums.end(), 0)==nums.size()) return "0";
        string s = "";
        for(auto i : nums) s+=to_string(i);
        return s;
    }
};