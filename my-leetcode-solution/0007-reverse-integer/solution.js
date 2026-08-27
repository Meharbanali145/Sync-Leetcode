/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {

    let revN = 0;

    const INT_MIN = -2147483648;
    const INT_MAX = 2147483647;

    while (x !== 0) {

        let lastDigit = x % 10;

        if (
            revN > Math.trunc(INT_MAX / 10) ||
            (revN === Math.trunc(INT_MAX / 10) && lastDigit > 7)
        ) {
            return 0;
        }

        if (
            revN < Math.trunc(INT_MIN / 10) ||
            (revN === Math.trunc(INT_MIN / 10) && lastDigit < -8)
        ) {
            return 0;
        }

        revN = (revN * 10) + lastDigit;

        x = Math.trunc(x / 10);
    }

    return revN;
};
