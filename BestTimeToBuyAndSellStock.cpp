class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy, sell, check, profit = 0;
        buy = prices[0];
        sell = prices[1];

        for(int j = 1; j< prices.size();){
            
            check = sell - buy;
            if(check < 0){
                buy = sell;
                sell = prices[++j];
            }
            else{
                profit = check > profit ? check : profit;
                sell = prices[++j];
            }
        }
        return profit;
    }
};