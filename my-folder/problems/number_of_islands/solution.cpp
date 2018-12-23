class Solution {
public:
    void dfs(vector<vector<char> > &grid, map<pair<int,int>,bool> &m, pair<int,int> s)
    {
        m[s]=true;
        int in = grid.size(), jn = grid[0].size() ;
        int ix = s.first, jx = s.second ;
        if(ix+1 < in && jx <jn){
            if(m.find({ix+1,jx})==m.end() && grid[ix+1][jx]=='1')
            {
                
                dfs(grid,m,{ix+1,jx});
            }
            
            }
        if(ix < in && jx+1 < jn)
        {
            if(m.find({ix,jx+1})==m.end() && grid[ix][jx+1]=='1')
            {
                dfs(grid,m,{ix,jx+1}) ;
            }
        }
        
        if(ix-1 >=0)
        {
            if(m.find({ix-1, jx})==m.end() && grid[ix-1][jx]=='1')
            {
                dfs(grid,m,{ix-1, jx});
            }
        }
        if(jx-1 >=0)
        {
            if(m.find({ix,jx-1})==m.end() && grid[ix][jx-1]=='1')
            {
                dfs(grid,m,{ix,jx-1});
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        map<pair<int,int>,bool> m ;
        int ans=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(m.find({i,j})==m.end() && grid[i][j]=='1')
                {
                    ans++;
                    dfs(grid,m,{i,j});
                }
            }
        }
        
        return ans;
            
    }
};