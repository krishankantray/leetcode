class Solution {
public:
    bool check(string s){
        int a=0, e=0, i=0, o=0, u=0;
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'|| c=='u'){
                if(a==0 && c=='a') a++ ;
                if(e==0 && c=='e') e++ ;
                if(i==0 && c=='i') i++ ;
                if(o==0 && c=='o') o++ ;
                if(u==0 && c=='u') u++ ;
                continue;
            }
            else return false;
        }
        if(a+e+i+o+u == 5)
            return true;
        return false; 
    }
    int countVowelSubstrings(string word) {
        int ans=0;
        int n=word.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<=i-4; j++){
                if(check(word.substr(j,i-j+1))) ans++;
            }
        }
        return ans;
    }
};