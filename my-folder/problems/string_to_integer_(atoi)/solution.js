/**
 * @param {string} str
 * @return {number}
 */
var myAtoi = function(str) {
    str.replace(' ','');
    let ans = parseInt(str,10);
    if(!ans) return 0;
    if(ans>2147483647) return 2147483647 ;
    if(ans<-2147483648) return -2147483648 ;
    return ans;
};