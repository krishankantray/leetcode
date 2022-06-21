class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(set(s)) != len(set(t)):
            return False
        mp = {}
        for i in range(0, len(s)):
            if t[i] in mp.keys():
                if(mp[t[i]] != s[i]):
                    return False
            else:
                mp[t[i]] = s[i]
        # print(mp)
        return True