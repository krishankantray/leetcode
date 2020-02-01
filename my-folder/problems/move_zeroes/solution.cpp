class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ctr=0; 
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                nums[ctr++]=nums[i];
                
            }
        }
        
        while(ctr<n){
            nums[ctr++]=0; 
        }
        
        
    }
};