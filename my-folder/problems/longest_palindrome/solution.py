class Solution:
    def longestPalindrome(self, s: str) -> int:
        mp = {}
        n =len(s)
        for i in range(0, n):
            if s[i] not in mp:
                mp[s[i]]=1
            else:
                mp[s[i]]+=1
        ans=0
        flag=False
        for key in mp:
            if mp[key]%2==0:
                ans+=mp[key]
            else:
                ans+=mp[key]-1
                flag=True
        if flag:
            ans+=1
        return ans