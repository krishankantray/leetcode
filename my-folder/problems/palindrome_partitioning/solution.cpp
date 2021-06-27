class Solution {
public:
    bool isPalin(string s){
        int i=0, n=s.size() ;
        if(n<=1) return true ;
        int j=n-1 ; 
        while(i<=j){
            if(s[i]!=s[j]) return false ; 
            i++, j-- ;
        }
        return true ;
    }
    void recur(string &s, int start, vector<string>temp , vector<vector<string> > &ans){
        if(start == s.size()){
            ans.push_back(temp) ; 
            
        } 
        for(int i=start; i<s.size(); i++){
            string sbs = s.substr(start,i-start+1) ; 
            if(isPalin(sbs)){
                temp.push_back(sbs) ;
                recur(s, i+1, temp, ans) ;
                temp.pop_back() ;
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string> > ans ;
        recur(s,0, vector<string>() ,ans);
        return ans ; 
    }
};