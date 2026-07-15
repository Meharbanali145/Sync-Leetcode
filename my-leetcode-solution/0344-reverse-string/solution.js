/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    let lf = 0;
    let rt  = s.length-1;
    while(lf<rt){
        [s[lf],s[rt]]=[s[rt],s[lf]];
        lf++;
        rt--;
    }
};
