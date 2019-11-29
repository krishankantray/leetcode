class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0 ;
        for(int i=1; i<points.size(); i++){
            
            int x_diff = abs((points[i][0]-points[i-1][0])) ;
            int y_diff = abs((points[i][1]-points[i-1][1])) ;
            if(y_diff < x_diff)
            ans+=(y_diff + abs(x_diff-y_diff)) ;
            else
                ans+=(x_diff + abs(x_diff-y_diff)) ;
        }
        
        return ans; 
        
    }
};