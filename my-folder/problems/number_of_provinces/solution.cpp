class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size() ; 
        bool visited[v] ;
        for(int i=0; i<v; i++) visited[i]=false ; 
        queue<int>q;
        int f=0;
        int count =0 ; 
        while(f<v){
            if(visited[f]) {
                f++;
                continue ; 
            }
            q.push(f);
            f++; 
            count++;
            while(!q.empty()){
                int cur = q.front() ; 
                visited[cur]=true ; 
                q.pop(); 
                for(int i=0; i<isConnected[cur].size(); i++){
                    if(isConnected[cur][i]==1 && !visited[i]){
                        q.push(i) ; 
                    }
                }
            }
        }
        return count ; 
    }
};