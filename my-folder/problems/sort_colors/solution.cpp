class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size() ;
        int z=0, t=n-1, cur=0 ;
        while(cur<=t){
            if(nums[cur]==0){
                swap(nums[z], nums[cur]) ;
                z++;
                cur++; 
            }
            else if(nums[cur]==2){
                swap(nums[cur], nums[t]) ;
                t-- ;
            }
            else if(nums[cur]==1){
                cur++ ;
            }
            
            // for(int x:nums) cout<<x<<", " ;
            // cout<<endl; 
        }
    }
};