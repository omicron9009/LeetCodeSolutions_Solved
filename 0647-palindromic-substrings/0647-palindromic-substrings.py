class Solution:
    def countSubstrings(self, s: str) -> int:
        res = 0 
        def Count(l,r):
            nonlocal res
            while l >=0 and r<len(s) and s[l]==s[r]:
                res+=1
                l-=1
                r+=1
        for i in range(len(s)):
            l,r = i,i
            Count(l,r)
            l,r=i,i+1
            Count(l,r)
        return res 

            
