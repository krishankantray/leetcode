class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(s) > len(t):
            return False
        k=0
        for i in range(0, len(t)):
            if k==len(s):
                return True
            if s[k]==t[i]:
                k+=1
        if k==len(s) :
            return True
        return False