/**
 * @param {string} J
 * @param {string} S
 * @return {number}
 */
var numJewelsInStones = function(J, S) {
    let mp = {} ;
    for(let x of J) {
        mp[x]=0;
    }
    
    for(let y of S){
        if(y in mp){
            mp[y]++ ;
        }
    }
    let ans=0;
    for(let i in mp){
        ans+=mp[i];
    }
    return ans ;
};