class Solution {
public:
    unordered_map<char, string>mp;
    
    void recur(string&digits, int start, string temp, vector<string>&ans){
        if(start==digits.size()){
            ans.push_back(temp);
        }
        for(char ch: mp[digits[start]]){
            temp.push_back(ch);
            recur(digits, start+1, temp, ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        mp['2']="abc" ;
        mp['3']="def" ;
        mp['4']="ghi" ;
        mp['5']="jkl" ;
        mp['6']="mno" ;
        mp['7']="pqrs" ;
        mp['8']="tuv" ;
        mp['9']="wxyz" ;
        vector<string>ans;
        if(digits.size()==0) return ans; 
        recur(digits, 0,"", ans);
        return ans ;
    }
};