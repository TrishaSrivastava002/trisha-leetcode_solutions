class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int m=k,sum;
        vector<int> v;
        int n= num.size()-1;
    while(m!=0 || n>=0){
        if(n>=0)
          m+= num[n--]; 
        v.push_back(m%10);
            m/=10;    
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
