class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int def=0,bal=0,start=0;
        for(int i=0;i<gas.size();i++){
            bal+= gas[i]-cost[i];
            if(bal<0){
              def+=bal;
            start= i+1;
                bal=0;
            }      
        }
        if(bal+def>=0)
            return start;
      return -1;
            
    }
};