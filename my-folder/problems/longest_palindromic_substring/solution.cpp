class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int mat[n][n];
        int mx=1 ;
        int i_mx=0, j_mx=0 ;
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                if(i==j){
                    mat[i][j]=1;
                    continue ;
                }
                else{
                    if( (s[i]==s[j]) && (j+1==i || mat[i-1][j+1]==1) ){
                        mat[i][j]=1;
                        if((1+i-j)>mx){
                            mx=1+i-j ; 
                            i_mx=i, j_mx=j ;
                        }
                    }
                    else
                        mat[i][j]=0 ;
                }
            }
        }
        return s.substr(j_mx, abs(i_mx-j_mx)+1) ;
    }
};