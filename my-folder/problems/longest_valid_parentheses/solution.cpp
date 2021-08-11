class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size(); 
        stack<int>si;
        si.push(-1); 
        int ans = 0 ; 
        for(int i=0; i<n; i++){
            if(s[i]=='(') 
                si.push(i) ;
            else{
                si.pop();
                if(si.empty()){
                    si.push(i);
                }
                else{
                    ans = max(ans, i-si.top()) ;
                }
            }
        }
        return ans; 
    }
};