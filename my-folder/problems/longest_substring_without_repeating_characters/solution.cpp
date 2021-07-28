class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int b=0, f=1 ;
        int n=s.size() ;
        if(n<=1) return n ; 
        int ans=1, cur=1 ;
        map<char,int>mp ;
        mp[s[b]]=1 ; 
        while(f<n && b<f){
            mp[s[f]]++ ;
            if(mp[s[f]] >1){ 
                while(b<f){
                    mp[s[b]]-- ;
                    if(mp[s[b]]==0) mp.erase(s[b]) ;
                    if(s[b]==s[f]){
                        b++; 
                        break; 
                    }
                    b++;
                }
            }
            f++ ;
            cur = f-b ; 
            ans=max(ans,cur) ; 
            // for(auto x:mp) cout<<x.first<<":"<<x.second<<", " ; cout<<endl; 
        }
        
        return ans ; 
    }
};