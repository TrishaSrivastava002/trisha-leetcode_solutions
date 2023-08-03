class Solution {
    void solve(string digits,string output,int index,vector <string> &ans,string map[]){
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        }
        int number = digits[index]-'0';
        string value = map[number];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,output,index+1,ans,map);
            output.pop_back();
        }
        
        
    }
public:
    vector<string> letterCombinations(string digits) {
         vector<string> ans;
      string output;
        if(digits.length()==0){
            return ans;
        }
        int index=0;
         string map[10] = {"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, output, index,ans,map);
        return ans;
    }
};