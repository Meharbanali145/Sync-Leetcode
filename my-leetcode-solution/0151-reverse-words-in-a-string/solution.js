/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    s = s.split("").reverse().join("");
    let ans = "";
    for(let i=0;i<s.length;i++){
        let word = "";
        while(i< s.length && s[i] != ' '){
            word += s[i];
            i++;
        }
        word = word.split("").reverse().join("");
        if(word.length>0){
            ans+=" "+word;
        }
    }
    return ans.substring(1);
};
