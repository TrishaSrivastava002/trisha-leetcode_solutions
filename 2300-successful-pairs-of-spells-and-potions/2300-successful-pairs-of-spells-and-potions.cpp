class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> v;
        int s=spells.size(),p=potions.size();
        sort(potions.begin(),potions.end());
       for(int i=0;i<s;i++){
        if(success%spells[i]==0){
  int j=upper_bound(potions.begin(),potions.end(),success/spells[i]-1)-potions.begin();
          if(j<p) v.push_back(p-j);
           else v.push_back(0);
        }
        else{
  int j=upper_bound(potions.begin(),potions.end(),success/spells[i])-potions.begin();
          if(j<p) v.push_back(p-j);
           else v.push_back(0);  
        } 
       } 
        return v;
    }
};