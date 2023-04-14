class Solution {
public:
    int countSubstrings(string s){
        vector<string> v;
       int n=s.length(),k=0;
    for(int i=0;i<n;i++){
        int l=i,h=i;
        while(l>=0 && h<n && s[l]==s[h]){
            k++;
            l--;
            h++;
    }
        l=i,h=i+1;
        while(l>=0 && h<n && s[l]==s[h]){
            k++;
            l--;
            h++;
    }
    }
        return k;
    }
};