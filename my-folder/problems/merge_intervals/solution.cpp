class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size() ; 
        if(n==1) return intervals ; 
        sort(intervals.begin(), intervals.end(), [](vector<int>&a, vector<int>&b){ return a[0]<b[0] ; }) ;
        vector<int>temp = intervals[0] ;
        vector<vector<int>> ans; 
        bool flag=false; 
        for(int i=1; i<n; i++){
            //overalp
            if(temp[1]>= intervals[i][0]){
                temp[1]=max(temp[1], intervals[i][1]) ; 
                flag=true; 
            }
            else{
                ans.push_back(temp) ;
                temp=intervals[i] ; 
                if(i==n-1){
                    ans.push_back(temp) ; 
                }
                flag=false; 
            }
        }
        if(flag) ans.push_back(temp) ; 
        return ans; 
    }
};