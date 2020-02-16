/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    let map1 = {};
    for(let v1 of nums1){
        if(!map1.hasOwnProperty(v1)){
            map1[v1]=1;
        }
        else
            map1[v1]+=1 ;
    }
    
    let map2={};
    
    for(let v2 of nums2){
        if(!map2.hasOwnProperty(v2)){
            map2[v2]=1;
        }
        else
            map2[v2]+=1 ;
    }
    var ans= [];
    
    for(let x in map1 ){
        if(map2.hasOwnProperty(x)){
            for(let i=0; i< Math.min( map1[x],map2[x] ) ; i++ ){
                ans.push(x) ;
            }
        }
    }
    
    return ans ;
};