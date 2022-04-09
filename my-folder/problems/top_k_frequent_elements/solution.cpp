class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int x: nums) mp[x]++;
        int n=nums.size();
        vector<vector<int>>counter(n+1, vector<int>());
        for(auto itr:mp){
            counter[itr.second].push_back(itr.first);
        }
        int p=n;
        vector<int>ans;
        while(k>0 && p>0){
            if(counter[p].size()>0){
                for(int xx:counter[p]){
                    ans.push_back(xx);
                    k--;
                }
            }
            p--;
        }
        return ans;
    }
};