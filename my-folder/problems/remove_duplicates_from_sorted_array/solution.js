/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    if(nums.length==0) return 0;
    
    let cur=0;
    for(let i=0; i<nums.length; i++){
        if(nums[i]!=nums[cur]){
            nums[++cur]=nums[i];
        }
    }
    
    return cur+1; 
};