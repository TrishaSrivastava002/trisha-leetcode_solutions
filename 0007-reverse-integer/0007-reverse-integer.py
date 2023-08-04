class Solution(object):
    def reverse(self, x):
        res=0
        s= -1 if x < 0 else 1
        x = abs(x)
        while x:
            r=x%10
            res=res*10+r
            x /= 10
        res=s*res
        if res > 2**31 - 1 or res < -(2**31):
            return 0
        return res
        