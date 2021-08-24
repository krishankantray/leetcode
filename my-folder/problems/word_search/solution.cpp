class Solution {
public:
    
    bool recur(vector<vector<char>>& board, string &word, int i, int j, int ind){
        
        if( ind == word.size()){
            return true ;
        }
        
        if(ind>word.size() || i<0 || j<0 || i>=board.size() || j>=board[0].size() ||  board[i][j]!=word[ind]){
            return false;
        }
        
        char c = board[i][j] ; 
        board[i][j]='*' ; 
        bool res =   recur(board, word, i-1, j, ind+1) ||
                recur(board, word,  i, j-1, ind+1) ||
                recur(board, word,  i, j+1, ind+1) ||
                recur(board, word,  i+1, j, ind+1);
        
        board[i][j] = c ; 
        
        return res ; 
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                string cur ; 
                cur.push_back(board[i][j]) ; 
                if(word[0]==board[i][j])
                    if(recur(board, word, i, j, 0)){
                        return true; 
                    }
            }
        }
        return false; 
    }
};