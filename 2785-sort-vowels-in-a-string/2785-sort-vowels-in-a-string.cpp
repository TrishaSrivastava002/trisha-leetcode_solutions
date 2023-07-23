class Solution {
//     
public:
    bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string sortVowels(const string& s) {
    string vowels, t;
    
    // Separate the consonants and vowels
    for (auto ch : s) {
        if (isVowel(ch))
            vowels += ch;
        else
            continue;
    }
    
    // Sort the vowels in non-decreasing order of their ASCII values
    sort(vowels.begin(), vowels.end());
    
    // Construct the resulting string 't' by merging consonants and sorted vowels
    int i = 0;
    for (auto ch : s) {
        if (isVowel(ch))
            t += vowels[i++];
        else
            t += ch;
    }
    
    return t;
}
};