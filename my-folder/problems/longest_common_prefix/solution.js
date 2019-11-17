/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    strs.sort();
    let ans='';
    if(strs.length==0)
        return '';
    for(i=0; i<Math.max(strs[0].length, strs[strs.length-1].length); i++){
        if(strs[0][i]==strs[strs.length-1][i]){
            ans=ans+strs[0][i];
        }
        else
            {
                break ;
            }
    }
    return ans ;
};