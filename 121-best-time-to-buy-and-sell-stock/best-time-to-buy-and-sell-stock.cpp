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