class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string string1= "";
         string string2= "";
       
for(int i=0;i<word1.size();i++)
string1+=word1[i];
for(int i=0;i<word2.size();i++)
string2+=word2[i];
return string2==string1; 
    }
};