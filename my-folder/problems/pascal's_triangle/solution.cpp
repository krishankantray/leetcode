class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows) ;
        
        if(numRows==0) return ans ;
        
        ans[0]=vector<int>{1} ;
        if(numRows==1) return ans; 
        
        ans[1] = vector<int>{1,1} ;
        if(numRows==2) return ans ;
        
        for(int i=2; i<numRows; i++){
            
            vector<int>temp(i+1,1);
            
            for(int j=1; j<i; j++) temp[j]=ans[i-1][j]+ans[i-1][j-1] ;
            
            ans[i]=temp ;
        }
        return ans; 
    }
};