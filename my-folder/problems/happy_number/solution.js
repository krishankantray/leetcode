/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {
    
   
    let mp = {};
    
    
    do{
        mp[n]=true; 
        let x=n, sum=0;
        while(x>0){
            let t= (x%10);
            sum=sum+ (t*t);
            x=Math.floor(x/10); 
        }
        n=sum; 
        
        
    } while(!mp.hasOwnProperty(n) && n!=1)
    
   console.log(n);
   console.log(mp);
    console.log(mp.hasOwnProperty(n));
    
    
    if(n==1)
        return true;
    else
        return false; 
        
};