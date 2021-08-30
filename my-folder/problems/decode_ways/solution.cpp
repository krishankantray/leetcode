class Solution {
public:
    int numDecodings(string s) {
        int n=s.size() ; 
        int dp[n];
        dp[0] = s[0]!='0' ;
        for(int i=1; i<n; i++){
            dp[i]=0 ; 
            int one = stoi(s.substr(i,1));
            int two = s[i-1]=='0' ? 99 : stoi(s.substr(i-1, 2) ); 
            cout<<one<<" "<<two; 
            if(one >0) dp[i]=dp[i-1] ; 
            if(two<=26) dp[i]+=((i-2>=0 ? dp[i-2] : 1)) ;
        }
        for(int x:dp) cout<<x<<", "; 
        return dp[n-1] ;
    }
};