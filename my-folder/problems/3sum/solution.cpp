class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<n-2; i++){
            if(i>0 && nums[i]==nums[i-1]) continue; 
            int l=i+1, r=n-1 ;
            while(l<r){
                int ss = nums[i]+nums[l]+nums[r] ; 
                if(ss == 0){
                    ans.push_back(vector<int>( {nums[i], nums[l], nums[r]} )) ;
                    l++, r-- ;
                    while(l<n && nums[l]==nums[l-1]) l++ ;
                    while(r>=0 && nums[r]==nums[r+1]) r-- ; 
                }
                else 
                    if(ss<0) l++ ;
                else r-- ;
            }
        }
        return ans; 
    }
};