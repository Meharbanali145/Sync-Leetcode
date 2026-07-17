/**
 * @param {string} s
 * @param {string} part
 * @return {string}
 */
var removeOccurrences = function(str, p) {
    while (str.length > 0 && str.indexOf(p) !== -1) {

        let index = str.indexOf(p);

        str = str.slice(0, index) + str.slice(index + p.length);
    }

    return str;
};
