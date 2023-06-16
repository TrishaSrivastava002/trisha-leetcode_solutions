// class Solution{
//     bool solve(vector<int> &m1,vector<int> &m2){
//        for(int i=0;i<256;i++){
//        if(m2[i]<m1[i])  return false;
//        }
//        return true; 
//     }
// public:
// string minWindow(string s, string t){
//    vector<int> m1(260,0);
//    vector<int> m2(260,0); 
//    string k="";
//    int i=0,j=0,len=INT_MAX,st=-1;
//       if(s==t) return t;
//       if(t.length()>s.length()) return ""; 
//       for(auto c:t) m1[c]++;
//       while(i<s.length()){
//       m2[s[i]]++;
//       while(j<=i && solve(m1,m2)){
//           if(i-j+1<=len){
//             len=min(len,i-j+1);
//             st=j;  
//           }
//          m2[s[j++]]--; 
//       }    
//        i++;
//      }
//     if(st==-1) return "";
//     return s.substr(st,len);
//      }
// };
class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> map(128,0);
        for (char c : t) {
            map[c]++;
        }

        int counter = t.length(), begin = 0, end = 0, d = INT_MAX, head = 0;
        while (end < s.length()){
            if (map[s[end++]]-- > 0) {
                counter--;
            }
            while (counter == 0) {
                if (end - begin < d) {
                    head = begin;
                    d = end - head;
                }
                if (map[s[begin++]]++ == 0) {
                    counter++;
                }
            }  
        }
        return d == INT_MAX ? "" : s.substr(head, d);
    }
};