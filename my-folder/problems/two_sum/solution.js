/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let mp={} ;
    for(let i=0; i<nums.length; i++){
        let other = target-nums[i]; 
        if(other in mp){
            return [mp[other],i];
        }
        mp[nums[i]]=i ;
    }
    return null ;
};