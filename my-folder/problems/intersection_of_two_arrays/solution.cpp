class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int n = a.size(), m = b.size() ; 
        map<int,bool>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]=true;
        }
        set<int> ans; 
        for(int i=0;i<m;i++){
            if(mp.find(b[i]) != mp.end()) {
                // cout<<b[i]<<endl;
                ans.insert(b[i]);
            } 
        }
        return vector<int>(ans.begin(), ans.end()) ;
    }
};