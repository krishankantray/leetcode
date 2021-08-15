class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string> > ans ; 
        map<string, vector<string> > mp ; 
        for(string s:strs){
            string temp = s ;
            sort(temp.begin(), temp.end()) ;
            mp[temp].push_back(s);
        }
        for(auto m:mp){
            ans.push_back(m.second) ; 
        }
        return ans; 
    }
};