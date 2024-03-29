class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
    vector<string> v;
    unordered_set<string> s;
       for(string word:words) s.insert(word);
        
       for(string word:words){
          int n=word.size();
          vector<int> dp(n+1,0);
            dp[0]=1;
          for(int i=0;i<n;i++){
            if(!dp[i]) continue;
            for (int j=i+1;j<=n;j++){
                if(j-i<n && s.count(word.substr(i,j-i))){
                      dp[j]=1;
                   }
                }
                if (dp[n]){
                    v.push_back(word);
                    break;
                }
           }
       }
        return v;
    }
};