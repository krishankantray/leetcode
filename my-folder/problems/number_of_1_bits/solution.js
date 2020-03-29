/**
 * @param {number} n - a positive integer
 * @return {number}
 */
var hammingWeight = function(n) {

    let x= new Number(n);
    x= x.toString(2).split('').reduce((ctr,val)=>ctr += val=='1'?1:0 , 0);
    return x;
};