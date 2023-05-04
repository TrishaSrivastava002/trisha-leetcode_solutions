class Solution {
public:
    string predictPartyVictory(string senate){
       int sum=0;
      for(int i=0;i<senate.size();i++){
          if(senate[i]=='R'){
              if(sum<0) senate.push_back('D');
              sum++;
          }
          else{
             if(sum>0) senate.push_back('R');
              sum--; 
          }
      }
        return sum>0?"Radiant":"Dire";
    }
};