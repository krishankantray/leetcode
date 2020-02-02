class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ctr=0, cand=0;
        for(auto n:nums){
            cand=(ctr==0?n:cand);
            ctr+=(cand==n?1:-1);
        }
    return cand;
    }
    
};