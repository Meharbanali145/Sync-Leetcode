/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
       
    s=s.toLowerCase(s);

    let lf = 0;
    let rt  =s.length-1;

    while(lf<rt){
        if(!/[a-z0-9]/i.test(s[lf])){
            lf++;continue;
        }
        if(!/[a-z0-9]/i.test(s[rt])){
            rt--;continue;
        }
        if(s[lf] != s[rt]){
            return false;
        }
        lf++;rt--;
    }
    return true;
};
