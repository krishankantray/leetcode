class Solution {
public:
    static bool comp(pair<int, int> a, pair<int,int>b){
        if(a.first<b.first)
            return true ;
        else if(a.first==b.first)
            return a.second > b.second ;
        else 
            return false ;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int>mp ;
        for(int v:nums) mp[v]++ ;
        vector<pair<int,int> > pArr ;
        for(auto x:mp){
            pArr.push_back({x.second, x.first}) ;
        }
        sort(pArr.begin(), pArr.end(), comp) ;
        
        vector<int>ans(nums.size()) ;
        int k=0; 
        for(int i=0; i<pArr.size(); i++){
            int ctr = pArr[i].first ; 
            while(ctr--){
                ans[k++]=pArr[i].second ; 
            }
        }
        return ans ; 
    }
};