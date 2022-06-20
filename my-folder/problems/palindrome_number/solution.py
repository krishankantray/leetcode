class Solution:
    def isPalindrome(self, x: int) -> bool:
        s = str(x)
        n = len(s)
        for i in range(0, n//2):
            if(s[i] != s[n-1-i]):
                return False
        return True
            
        