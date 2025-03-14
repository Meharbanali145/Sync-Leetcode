class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        int ans;
        while(n > 0){
            int dig = n%10;
            prod *= dig;
            sum += dig;

            n /= 10; 
        }
        return ans=prod-sum;
    }
};
