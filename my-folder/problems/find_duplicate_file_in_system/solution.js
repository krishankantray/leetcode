/**
 * @param {string[]} paths
 * @return {string[][]}
 */
var findDuplicate = function(paths) {
    let inp= paths;
    
    for(let i=0; i<inp.length; i++){
        inp[i]=inp[i].split(' ');
        inp[i][inp[i].length-1]= inp[i][inp[i].length-1].replace('"','');
        inp[i][0]= inp[i][0].replace('"','');
    }

    let mp = {} ;
    for(let i=0; i<inp.length; i++)
    {
        for(let j=1; j<inp[i].length; j++){
            let data = inp[i][j].split(/[()]/)[1];
            if(!mp.hasOwnProperty(data)){
                mp[data]=[];
            }
            let item = inp[i][0]+'/'+inp[i][j].split(/[()]/)[0];
            mp[data].push(item);
            
        }
    }
    let ans=[];
    for(let i in mp){
        if(mp[i].length >1){
        ans.push(mp[i]);
        }
    }
    return ans;
};
