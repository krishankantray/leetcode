class Solution {
public:
    string minWindow(string s, string t) {
        int sLen = s.size();
        int tLen = t.size();
        unordered_map<char,int>mp;
        for(char ch:t) mp[ch]++ ;
        
        int ansLen = INT_MAX ; 
        int ansBeg = -1; 
        int ctr=mp.size() ;
        int l=0, r=0 ;
        
        while(r<sLen){
            if(mp.find(s[r])!=mp.end()) --mp[s[r]] ;
            if(mp.find(s[r])!=mp.end() && mp[s[r]]==0) ctr-- ;
            r++;
            while(ctr==0){
               // cout<<"r= "<<r<<" || "<<" l= "<<l<<endl;
                if(r-l < ansLen){
                    ansLen = r-l ; 
                    ansBeg = l ;
                }
                if(mp.find(s[l]) != mp.end()){
                    mp[s[l]]++ ;
                    if(mp[s[l]]>0) ctr++ ;
                }
                
                l++ ;
            }
            // if(r==13) cout<<"mp= "<<mp['A']<<", "<<mp['B']<<", "<<mp['C']<<", "<<endl; 
        }
        
        return ansBeg==-1 ? "" : s.substr(ansBeg, ansLen);  
    }
};