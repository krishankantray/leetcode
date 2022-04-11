class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>> ans(r,vector<int>(c));
        int ln = r*c;
        for(int i=0; i<ln; i++){
            int new_ln = i+k;
            ans[(new_ln/c)%r][new_ln%c] = grid[(i/c)%r][i%c];
        }
        return ans;
    }
};