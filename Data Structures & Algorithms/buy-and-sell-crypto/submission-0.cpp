class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prices_size = prices.size();
        int first_day = 0, result = 0;

        for(int i=1; i<prices_size; i++){
            result = max(prices[i]-prices[first_day], result);
            if(prices[first_day]>prices[i])first_day=i;
        }
        return result;
    }
};
