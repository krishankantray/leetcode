/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    
    let c=1;
    
    for(let i=digits.length-1 ; i>=0 ; i--){
        
        digits[i]+=c ;
        c=Math.floor(digits[i]/10);
        digits[i]=digits[i]%10 ;
        if(c==0) break;
        console.log(c+' :: '+i);
    }
    if(c==1)
        digits.unshift(1);
    return digits;
    
};