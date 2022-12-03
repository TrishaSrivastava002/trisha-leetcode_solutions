class Solution {
public:
    string frequencySort(string s){
        map<char,int> m;
        
    vector<pair<int,char>> v;
   for(auto c:s) m[c]++;
   for(auto it:m)
     v.push_back({it.second,it.first});
   sort(v.begin(),v.end());//sorted the frequencies.
        
    string k="";
        
   for(auto it:v){
       while(it.first!=0){
         k+=it.second;//added according to ascending frequencies
           it.first--;
       }    
        }
        reverse(k.begin(),k.end());
    return k;
    }
};