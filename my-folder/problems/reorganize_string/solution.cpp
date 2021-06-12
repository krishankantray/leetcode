class Solution {
public:
    string reorganizeString(string str) {
        int n = str.size() ;
       map<char, int>mp;
       int mx_val=0;
       char mx_ch ;
       vector<char>vans(n) ;
       for(char ch:str){
           ++mp[ch] ;
           if(mp[ch]>mx_val){
               mx_val=mp[ch] ;
               mx_ch=ch ;
           }
       }
        
       if(mx_val > (n+1)/2) return "" ; 
       
       int itr=0; 
       while(mx_val){
           vans[itr]=mx_ch ;
           itr+=2 ;
           mx_val-- ;
           --mp[mx_ch] ;
       }
       
       for(auto i:mp){
           int count_char = i.second ;
           char charact = i.first ;
           while(count_char>0){
               if(itr<n){
                   vans[itr]=charact ;
                    count_char-- ;
               }
               if(itr>n) itr=1 ; else itr+=2 ;
           }
       }
       string ans(vans.begin(), vans.end()) ;
       return ans ;
    }
};