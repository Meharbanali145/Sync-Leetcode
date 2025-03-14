class Solution {
public:
    int addDigits(int num) {
 while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10; // Add the last digit
            num /= 10;       // Remove the last digit
        }
        num = sum; // Update num to the sum of its digits
    }
    return num;

    }
};
