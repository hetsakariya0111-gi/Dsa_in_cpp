// 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i = 0; i<prices.size(); i++){
            if(prices[i]<minPrice){
                minPrice = prices[i];
            }

            int profit = prices[i] - minPrice;

            if(profit>maxProfit){
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};

// time -> O(n) because we are traversing the array once
// space -> O(1) because we are using only constant extra space