class Solution {
public:
int characterReplacement(string s, int k){
     if(k==s.length()) return k;
     int arr[26]={0};
     int j=0,sum=0,res=INT_MIN,m=0,i;                                   
 for(i=0;i<s.length();i++){
     res=max(res,++arr[s[i]-'A']);
 //if is used not while becoz we have a limit of k cannot remove unlimited characters
    while(i-j-res+1>k) arr[s[j++]-'A']--;  
    }
    return i-j;                                          
    }
};