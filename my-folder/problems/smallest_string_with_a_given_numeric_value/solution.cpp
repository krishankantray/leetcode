class Solution {
public:
    
    string getSmallestString(int n, int k) {
        string ans(n, 'a');
        k-=n;
        vector<char>dict(27);
        for (int i = 1; i <= 26; i++) {
		    dict[i] = (char)(96 + i);
	    }   
        for(int i=n-1; i>=0 && k>=0; i--){
            k+=1;
            if(k>=26){
                k-=26;
                ans[i]='z';
            }
            else{
                ans[i]=dict[k];
                k=0;
            }
        }
        
        return ans;
    }
};