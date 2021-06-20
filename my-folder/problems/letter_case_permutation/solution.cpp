class Solution {
public:
    void recur(string s, int start, vector<string>&ans){
        if(start==s.size()){
            ans.push_back(s) ;
            return ;
        }
        if(isalpha(s[start])){
        recur(s.substr(0,start)+char(toupper(s[start]))+s.substr(start+1),start+1, ans) ;
        recur(s.substr(0,start)+char(tolower(s[start]))+s.substr(start+1),start+1, ans) ; 
        }
        else{
            recur(s, start+1, ans) ; 
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        recur(s, 0, ans);
        return ans; 
    }
};