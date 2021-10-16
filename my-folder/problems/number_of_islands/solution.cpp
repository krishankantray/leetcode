class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        if(n==0) return 0;
        int m=grid[0].size();
        stack<pair<int,int> > dfs;
        vector<vector<bool> > vis(n, vector<bool>(m,false));
        int ans=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs.push({i,j});
                    ans++;
                    
                    while(!dfs.empty()){
                        pair<int,int>cur = dfs.top();
                        dfs.pop();
                        int cur_i = cur.first;
                        int cur_j = cur.second;
                        vis[cur_i][cur_j]=true;
                        if(cur_i+1 < n && grid[cur_i+1][cur_j]=='1' && !vis[cur_i+1][cur_j]){
                            dfs.push({cur_i+1, cur_j}) ;
                            //vis[cur_i+1][cur_j]=true;
                        }
                        if(cur_i-1 >=0 && grid[cur_i-1][cur_j] =='1' && !vis[cur_i-1][cur_j]){
                            dfs.push({cur_i-1, cur_j}) ;
                            //vis[cur_i-1][j]=true;
                        }
                        if(cur_j+1 <m && grid[cur_i][cur_j+1]=='1' && !vis[cur_i][cur_j+1]){
                            dfs.push({cur_i, cur_j+1}) ; 
                            //vis[cur_i][cur_j+1]=true;
                        }
                        if(cur_j-1 >=0 && grid[cur_i][cur_j-1]=='1' && !vis[cur_i][cur_j-1]) {
                            dfs.push({cur_i, cur_j-1}) ; 
                            //vis[cur_i][cur_j-1]=true;
                        }
                    }
                }
            }
        }
        return ans; 
    }
};