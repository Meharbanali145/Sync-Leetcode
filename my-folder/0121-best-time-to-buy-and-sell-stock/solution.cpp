class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int bestBuy = prices[0];
    int maxProfi = 0;
    for(int i=0;i<prices.size();i++){
        if(prices[i] > bestBuy){
            maxProfi = max(maxProfi,prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy,prices[i]);
    }
    return maxProfi;
}
};
