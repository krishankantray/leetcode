class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size() ;
        int c = matrix[0].size() ; 
        int aitr = 0 ;
        vector<int>ans(r*c) ; 
        
        int row_min = 0, row_max = r-1 ;
        int col_min = 0, col_max = c-1 ;
        
        while(row_min <= row_max && col_min <= col_max){
            for(int k=col_min; k<= col_max; k++){
                ans[aitr++] = matrix[row_min][k] ; 
            }
            ++row_min ;
            if(row_min > row_max) break; 
            for(int k=row_min; k<= row_max; k++){
                ans[aitr++] = matrix[k][col_max] ; 
            }
            --col_max ; 
            if(col_min > col_max) break ;
            for(int k=col_max; k>=col_min; k--){
                ans[aitr++] = matrix[row_max][k] ; 
            }
            --row_max ; 
            
            if(row_min>row_max) break ;  
            for(int k=row_max; k>=row_min; k--){
                ans[aitr++] = matrix[k][col_min] ; 
            }
            ++col_min ;
        }
  
        return ans ;
    }
};