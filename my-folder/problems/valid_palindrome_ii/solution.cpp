class Solution {
public:
    bool checkPalin(string &s, int i, int j){
        while(i<j && s[i]==s[j]) i++, j-- ; 
        return i>=j ;
    }
    bool validPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<j && s[i]==s[j]) i++, j-- ;
        if(i>=j) return true;
       return checkPalin(s, i+1,j) || checkPalin(s, i, j-1) ;
    }
};