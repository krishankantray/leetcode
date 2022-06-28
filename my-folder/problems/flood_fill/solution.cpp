class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r = image.size();
        int c = image[0].size();
        cout<<r<<c<<endl;
        int cur = image[sr][sc];
        queue<vector<int> >q;
        q.push({sr, sc});
        vector<vector<bool>> vis(r);
        for(int i=0; i<r; i++) for(int j=0; j<c; j++) vis[i].push_back(false);
        while(!q.empty()){
            vector<int> tp = q.front();
            q.pop();
            int q_i = tp[0];
            int q_j = tp[1];
            image[q_i][q_j]=color;
            // left 
            if(q_j-1 >=0 && image[q_i][q_j-1] == cur && !vis[q_i][q_j-1] ){
                q.push({q_i, q_j-1});
                vis[q_i][q_j-1]=true;
                // cout<<"LEFT: "<<q_i<<" "<<q_j<<endl;
            }
            // right 
            if(q_j+1 < c && image[q_i][q_j+1] == cur && !vis[q_i][q_j+1] ){
                q.push({q_i, q_j+1});
                vis[q_i][q_j+1]=true;
                // cout<<"RIGHT: "<<q_i<<" "<<q_j<<endl;
            }
            // top 
            if(q_i-1 >=0 && image[q_i-1][q_j] ==cur && !vis[q_i-1][q_j] ){
                q.push({q_i-1, q_j});
                vis[q_i-1][q_j]=true;
                // cout<<"TOP: "<<q_i<<" "<<q_j<<endl;
            }
            // bottom 
            if(q_i+1 <r && image[q_i+1][q_j] ==cur && !vis[q_i+1][q_j] ){
                q.push({q_i+1, q_j});
                vis[q_i+1][q_j]=true;
                // cout<<"BOTTOM: "<<q_i<<" "<<q_j<<endl;
            }
            // cout<<"SIZE="<<q.size()<<" q_i="<<q_i<<"  q_j="<<q_j<<endl;
        }
        
        return image;
    }
};