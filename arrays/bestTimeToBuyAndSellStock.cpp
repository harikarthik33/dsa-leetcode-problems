class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;

        int minPrice=prices[0];
        int maxProfit=0;

        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-minPrice;
            maxProfit=max(maxProfit,profit);
            minPrice=min(minPrice,prices[i]);       }
            return maxProfit;
    }
    
};
// Best Time to Buy and Sell Stock

// ## Problem
// Given an array prices where prices[i] is the stock price on the ith day,
// return the maximum profit by buying once and selling once.
// If no profit is possible, return 0.

// ## Approach
// - Keep track of the minimum price seen so far.
// - For every day:
//     - Calculate profit = current price - minimum price.
//     - Update maximum profit if current profit is larger.
//     - Update minimum price if current price is smaller.

// ## Dry Run
// prices = [7,1,5,3,6,4]
//
// Day  Price  MinPrice  Profit  MaxProfit
// 0      7       7         0         0
// 1      1       1         0         0
// 2      5       1         4         4
// 3      3       1         2         4
// 4      6       1         5         5
// 5      4       1         3         5
//
// Answer = 5

// ## Time Complexity
// O(n)

// ## Space Complexity
// O(1)