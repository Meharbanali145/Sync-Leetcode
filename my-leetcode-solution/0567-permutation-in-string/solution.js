/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */

var isFreqSame = function(freq1,freq2){
    for(let i=0;i<26;i++){
        if(freq1[i] !== freq2[i]){
            return false;
        }
    }
    return true;
}
var checkInclusion = function(s1, s2) {
    
    let freq = new Array(26).fill(0);
    for(let i=0;i<s1.length;i++){
            freq[s1.charCodeAt(i)-'a'.charCodeAt(0)]++;
        }

        let windSize = s1.length;
        for(let i=0;i<s2.length;i++){
            let windIndx = 0, indx = i;
            let windFreq = new Array(26).fill(0);
            while(windIndx < windSize && indx < s2.length){
                windFreq[s2.charCodeAt(indx)-'a'.charCodeAt(0)]++;
                windIndx++;indx++;
            }
            if(isFreqSame(freq,windFreq)){
                return true;
            }
        }
        return false;
    
};
