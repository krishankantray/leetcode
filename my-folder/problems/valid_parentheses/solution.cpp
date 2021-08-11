class Solution {
public:
    bool isValid(string s) {
        map<char,char>mp;
        mp[')']='(' ; 
        mp[']']='[' ;
        mp['}']='{' ;
        stack<char>sc;
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i])==mp.end()) sc.push(s[i]);
            else
            if(!sc.empty() && sc.top()==mp[s[i]]) sc.pop();
            else return false; 
        }
        return sc.empty(); 
    }
};