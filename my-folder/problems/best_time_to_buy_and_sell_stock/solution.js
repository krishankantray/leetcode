/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let mx=Number.MIN_SAFE_INTEGER ;
    
    for(let i=0; i<prices.length-1; i++){
        for(let j=i+1; j<prices.length; j++){
            mx = Math.max(mx, (prices[j]-prices[i]) ) ;
        }
    }
    return (mx<0?0:mx) ;
};