class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,cur; 
        for(int i=0; i<nums.size(); i++){
            if(c==0){
                c=1, cur=nums[i] ;
            }
            else{
                if(cur==nums[i]) c++;
                else c-- ;
            }
        }
        return cur ; 
    }
};