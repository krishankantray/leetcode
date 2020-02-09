class Solution {
public:
    int titleToNumber(string s) {
        int ans =0;
        long pwr=1;
        reverse(s.begin(), s.end()) ;
        for(auto c:s){
            ans+=(pwr*(c-'A' +1));
            pwr=pwr*26;
        }
        return ans;
    }
};