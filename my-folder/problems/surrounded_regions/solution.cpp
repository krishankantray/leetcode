class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size(); 
        if(n==0) return ;
        int m=board[0].size();
        stack<pair<int, int>> dfs;
        int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if( (i==0 || i==n-1 || j==0 || j==m-1) && board[i][j]=='O'){
                    dfs.push({i,j});
                    board[i][j]='#';
                }
                while(!dfs.empty()){
                    pair<int,int>cur=dfs.top();
                    dfs.pop();
                    int ci=cur.first, cj=cur.second;
                    for(int p=0; p<4; p++){
                        int x=ci+dir[p][0], y=cj+dir[p][1];
                        if(x>=0 && x<=n-1 && y>=0 && y<=m-1 && board[x][y]=='O'){
                            dfs.push({x,y});
                            board[x][y]='#';
                        }
                    }
                }
            }
        }
        
        // converting O to X
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) if(board[i][j]=='O') board[i][j]='X';
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) if(board[i][j]=='#') board[i][j]='O';

    }
};