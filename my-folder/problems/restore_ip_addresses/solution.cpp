class Solution {
public:
    bool isValidPart(string part){
        if(part.size()>3) return false ;
        if(part.size()>1 && part[0]=='0') return false ;
        if(part.size()>0 && stoi(part)>=0 && stoi(part)<=255) return true;
        return false ;
    }
    
    void backtrack(string &s, vector<string>&ans, int start, string temp, int dot ){
        if(dot==3){
            if(isValidPart(s.substr(start))){
                ans.push_back(temp+s.substr(start)) ;
            }
            return ;
        }
        for(int i=start; i<s.size(); i++){
            if(isValidPart(s.substr(start, i-start+1))){
                temp.push_back(s[i]);
                temp.push_back('.') ;
                backtrack(s, ans, i+1, temp, dot+1) ;
                temp.pop_back(); // this is backtracking
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans; 
        if(s.size()<4 && s.size()>12) return ans ;
        backtrack(s, ans, 0, "", 0) ;
        return ans ; 
    }
};