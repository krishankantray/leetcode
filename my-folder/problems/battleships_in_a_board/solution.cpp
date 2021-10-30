class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        stack<pair<int,int> > dfs;
        int n=board.size();
        if(n==0) return 0;
        int m=board[0].size();
        vector<vector<bool> >vis(n, vector<bool>(m, false));
        int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}} ;
        int ans=0;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(vis[i][j] || board[i][j]=='.') continue;
                if(!vis[i][j] && board[i][j]=='X'){
                    //cout<<"i="<<i<<" , j="<<j<<endl;
                    dfs.push({i,j});
                    vis[i][j]=true;
                    ans++;
                }
                
                while(!dfs.empty()){
                    pair<int,int>cur = dfs.top();
                    dfs.pop();
                    int ci=cur.first, cj=cur.second ;
                    for(int p=0; p<4; p++){
                        int x= dir[p][0], y=dir[p][1] ;
                        if(ci+x<n && ci+x>=0 && cj+y<m && cj+y>=0 && !vis[ci+x][cj+y] && board[ci+x][cj+y]=='X'){
                            //cout<<"ci="<<ci<<" , cj="<<cj<<" :: x="<<x<<" , y="<<y<<endl;
                            vis[ci+x][cj+y]=true;
                            dfs.push({ci+x, cj+y});
                        }
                    }
                } // end while loop
            }
        }
        return ans; 
    }
};