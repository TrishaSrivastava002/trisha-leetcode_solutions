class Solution:
    def romanToInt(self, s: str) -> int:
        res=0
        m={"I":1,
             "V":5,
             "X":10,
             "L":50,
             "C":100,
             "D":500,
             "M":1000 }  
        for i in range(1,len(s)):
            if m[s[i-1]]<m[s[i]]:
                res-=m[s[i-1]]
            else:
                res+=m[s[i-1]]
        return res+m[s[-1]]        
                
            
        