class Solution {
public:
    bool isCycle(vector<vector<int>>&adj, int beg, vector<bool>&vis, vector<bool>&curVis){
        vis[beg]=true;
        curVis[beg]=true;
        for(auto v:adj[beg]){
            if(!vis[v]){
                if(isCycle(adj, v, vis, curVis)) return true;
            }
            else if(curVis[v]) return true;
        }
        curVis[beg]=false;
        return false; 
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto pr:prerequisites) adj[pr[1]].push_back(pr[0]);
        vector<bool>vis(numCourses, false);
        vector<bool>curVis(numCourses, false);
        for(int i=0; i<numCourses; i++){
            if(!vis[i]){
                if(isCycle(adj, i, vis, curVis)) return false;
            }
        }
        return true;
    }
};