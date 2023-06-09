class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if((upper_bound(letters.begin(), letters.end(),target) - letters.begin())<letters.size()) 
      return letters[(upper_bound(letters.begin(), letters.end(),target) - letters.begin())]; 
        return letters[0];
    }
};