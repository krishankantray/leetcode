class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size() ;
        int c = matrix[0].size() ;
        map<int, bool>rm;
        map<int, bool>cm;
        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0 ) {
                    rm[i]=true;
                    cm[j]=true;
                }
            }
        }
        for(auto x:rm){
            int ind = x.first ; 
            for(int j=0; j<c; j++) matrix[ind][j]=0 ;
        }
        
        for(auto y:cm){
            int ind = y.first ; 
            for(int i=0; i<r; i++) matrix[i][ind]=0 ;
        }
        
    }
};