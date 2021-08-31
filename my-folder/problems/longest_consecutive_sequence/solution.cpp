class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int>mp;
        int category=0 ; 
        for(int x:nums){
            if(mp.find(x-1)!=mp.end()){
                mp[x]=mp[x-1] ; 
            }
            else if(mp.find(x+1) !=mp.end()){
                mp[x]=mp[x+1];
            }
            else mp[x] = category++ ; 
        }
        int ans=0 ;
        map<int, int>catSum;
        for(auto mi:mp){
            auto l = mp.find(mi.first-1) ; 
            auto r = mp.find(mi.first+1) ; 
            if(l!=mp.end()) l->second = mi.second ; 
            if(r!=mp.end()) r->second = mi.second ; 
            // cout<<"[ "<<mi.first<<":"<<mi.second<<" ],  " ; 
            ++catSum[mi.second] ;
            ans=max(ans, catSum[mi.second]) ; 
        }
        return ans ; 
    }
};