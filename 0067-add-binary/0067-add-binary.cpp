class Solution {
public:
    string addBinary(string a, string b) {
      int i=a.length()-1,j=b.length()-1,carry=0;
        string s="";
      while(i>=0 || j>=0 || carry>0){
        int sum=carry;
        if(i>=0){
            sum+=a[i]-'0';
            i--;
        }
          if(j>=0){
            sum+=b[j]-'0';
            j--;
        }
        carry=sum/2;
        s+=to_string(sum%2);
      }
    reverse(s.begin(),s.end());
    return s;    
    }
};