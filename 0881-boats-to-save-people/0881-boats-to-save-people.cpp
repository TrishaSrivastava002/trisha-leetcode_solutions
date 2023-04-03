class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       int n=people.size(),ans=0;
       sort(people.begin(),people.end());
       int s=0,e=n-1;
       while(s<=e){
          if(people[s]+people[e]<=limit){
            s++;
            e--;
          } 
          else e--;
          ans+=1;
       }
        return ans;
    }
};