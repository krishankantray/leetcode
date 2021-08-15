class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN ;
        int cs = 0; 
        for(int x:nums){
            cs+=x ;
            if(cs<0){
                mx=max(mx, x) ; 
                cs=0 ; 
            }
            else
                mx = max(mx, cs) ; 
        }
        return mx ; 
    }
};