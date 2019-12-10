/**
 * @param {number} x
 * @param {number} y
 * @return {number}
 */
var hammingDistance = function(x, y) {
    let z=(x^y);
    let ans =0; 
    while(z){
        if(z&1){
            ans++ ;
        }
        z=z>>1;
    }
    
    return ans;
};