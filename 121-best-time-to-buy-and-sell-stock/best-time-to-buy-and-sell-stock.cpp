class Solution {
public:
//OPTIMAL: O(N) -> Track the min price seen so far
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; 
        int maxProfit = 0;
        for(int price: prices){
            if(price < minPrice){
                minPrice = price; //update min price if find a lower price
            }
            else{
                maxProfit = max(maxProfit,price-minPrice); //update maxprofit
            }
        }
        return maxProfit;
    }
};
/*
"The key observation is that for any selling day, the best buying day is
simply the minimum price seen before it. So instead of checking all buy-sell pairs, 
I maintain minPrice, which stores the lowest price encountered so far, and maxProfit, 
which stores the best profit found so far. While traversing the array, 
I update minPrice whenever I find a lower value. Otherwise, I treat 
the current price as a selling price and calculate the profit using price - minPrice. 
If this profit is greater than the current maximum profit, I update it. 
This allows me to solve the problem in one pass with O(n) time and O(1) space."
*/
