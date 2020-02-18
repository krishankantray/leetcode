class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long int sum =0L ;
        for(auto v : nums){
            sum+=v;
        }
        
        long int s2 =0L ;
        int n=nums.size() ;
        s2 = (n*n + n)/2;
        
        int ans  = s2-sum ;
        return ans;
    }
};