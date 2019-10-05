/**
 * @param {number} num
 * @return {boolean}
 */
var isPowerOfFour = function(num) {
    let x=1;
    if(num==1) return true;
    while(x<num)
    { x=x*4 ;
    if(x==num) return true ; 
    }
    
    return false ;
};