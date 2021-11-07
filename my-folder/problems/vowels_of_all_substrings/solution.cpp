class Solution {
public:
    long long countVowels(string word) {
        long long ans = 0LL ;
        long long int n = word.size();
        map<char, int>mp;
        mp['a']=1, mp['e']=1, mp['i']=1, mp['o']=1, mp['u']=1 ;
        for(long long int i=0; i<n; i++){
            if(mp[word[i]]==1){
                ans += (long long)((i+1)*(n-i));
            }
        }
        return ans; 
    }
};