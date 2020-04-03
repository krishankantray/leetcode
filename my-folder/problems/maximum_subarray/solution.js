/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    var local_maximum=0;
    
    return nums
        .reduce( (global_maximum,current_element)=>{
        // local_maximum = Math.max(local_maximum + current_element, current_element);
        if(local_maximum <0 ) {
            local_maximum = current_element ;
        }
        else
            local_maximum = local_maximum + current_element ;
        
        global_maximum =  Math.max(global_maximum,local_maximum);
        
        return global_maximum ;
        
    }, -Infinity);
};


