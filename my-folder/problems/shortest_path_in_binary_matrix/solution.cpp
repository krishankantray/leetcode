class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1) return -1 ; 
        int r = grid.size() ;
        int c = grid[0].size() ;
        queue<pair<int, int> > q ;
        q.push({0,0}) ;
        vector<pair<int,int> > dir = {{-1,-1}, {0,-1}, {-1,0}, {1,0}, {0,1}, {1,1}, {1, -1}, {-1, 1} } ;
        
        vector<vector<bool> > vis(r, vector<bool>(c, false) ) ; 
        
        int level = 1 ; 
        while(!q.empty()){
            int qs = q.size() ; 
            for(int i=qs; i>0; i--){
                auto v = q.front() ;
                q.pop();
                int x = v.first ;
                int y = v.second ;
                if(x==r-1 && y==c-1) return level ; 
                for(auto d:dir){
                    int dx = x+d.first ;
                    int dy = y+d.second ;
                    if(dx>=0 && dy>=0 && dx<r && dy<c && grid[dx][dy]==0 && !vis[dx][dy]){
                        q.push({dx,dy}) ;
                        vis[dx][dy]=true ; 
                    }
                }
            }
            level++ ;
        }
        
        return -1 ;
    }
};