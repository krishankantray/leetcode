/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(k) {
    let mp={};
    let func = n=>{
        if(mp.hasOwnProperty(n)) return mp[n]; 
        if(n==0)
            return 1;
        else if(n<0)
            return 0; 
        
        let x=  func(n-1)+func(n-2) ;
        mp[n]=x;
        return x;
    }
    
    return func(k);
};