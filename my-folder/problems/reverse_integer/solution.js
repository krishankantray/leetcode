/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(xx) {
    let x=xx.toString();
    let y=x.split("");
    let ans=0 ;
    y.reverse();
    if(y[y.length -1]=='-'){
        let p = y.pop()  ;
        y.unshift(p);
    }
    let z=y.join("");
    ans=parseInt(z,10); 
    let up = Math.pow(2,31) -1 ;
    let low= -1 * Math.pow(2,31) ;
    if(ans >=low && ans <=up)
    return ans;
    else
        return 0;
};