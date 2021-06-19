class Solution {
public:
    
    void recur(int n, int l, int r, string temp, vector<string>&ans ){
        
        if(l==0 && r==0 ){
            ans.push_back(temp) ; 
            return ;
        }
        // if(l<0 || l<r ) return ; 
        if (l > r || l < 0) return;
        
            temp.push_back('(');
            recur(n, l-1, r, temp, ans) ;
            temp.pop_back() ;
        
            temp.push_back(')');
            recur(n, l, r-1, temp, ans);
            temp.pop_back(); 
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        if(n==0) return ans;
        recur(n, n, n, "", ans);
        return ans; 
    }
};