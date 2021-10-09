class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size() ;
        int i=0, j=n-1 ;
        while(i<=j){
            while(i<j && i<n && !isalnum(s[i])) i++;
            while(j>i && j>0 && !isalnum(s[j])) j--;
            if(tolower(s[i])!=tolower(s[j])) {
                // cout<<s[i]<<" "<<s[j];
                return false;
            }
            i++, j--; 
        }
        return true; 
    }
};