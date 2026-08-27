class Solution {
public:
    int reverse(int x) {
        int revN = 0;
        while(x != 0){
            int lastDigit  = x%10;
            if(revN < INT_MIN/10 || revN > INT_MAX/10){
                return 0;
            }
            revN = (revN*10)+lastDigit;
            x/=10;
        }

        return revN;
    }
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        int revN = reverse(x);
        return x == revN;
    }
};
