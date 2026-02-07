class Solution {
public:
int reverse(long long int n){
	long long int reverseNum = 0;
	while(n != 0){
		int rem = n%10;
		reverseNum = reverseNum * 10 + rem;
		n /= 10;
	}
	return reverseNum;
}
bool isPalindrome(int n){
	if(n < 0) return false;
	int revNum = reverse(n);
	return n == revNum;
}
};
