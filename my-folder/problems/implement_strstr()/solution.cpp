class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(), m=needle.size() ; 
        if(m==0) return 0 ; 
        for(int i=0; i<n; i++){
            int k=0;
            while(haystack[k+i]==needle[k] && k<m) k++;
            if(k==m) return i;
        }
        return -1 ;
    }
};