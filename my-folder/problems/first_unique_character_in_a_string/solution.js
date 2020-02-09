/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    let mp={};
    for(const c of s){
        if(mp.hasOwnProperty(c)){
            mp[c]+=1;
        }
        else
            mp[c]=1; 
    }
    
    for(const[ind, val] of s.split('').entries()){
        if(mp[val]==1)
            return ind;
    }
    return -1 ;
};