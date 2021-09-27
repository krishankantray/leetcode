class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        unordered_map<string, bool>mp; 
        bool dp[n+1];
        for(int i=0; i<=n; i++) dp[i]=false; // initialise
        for(int i=0; i<wordDict.size(); i++) mp[wordDict[i]]=true;
        dp[0]=true;
        for(int i=0; i<n; i++){
            if(!dp[i]) continue; 
            for(string dic:wordDict){
                int dl = dic.size(); 
                if(i+dl>n) continue; 
                string str = s.substr(i, dl);
                if(mp.find(str) !=mp.end()){
                   // cout<<str<<" - "<<i<<" "<<dl<<endl;
                    dp[i+dl]=true;
                }
            }
        }
        // for(auto x:dp) cout<<x<<", ";
        return dp[n]; 
    }
};