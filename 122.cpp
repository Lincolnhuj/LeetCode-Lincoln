class Solution {
    public:
        int maxProfit(vector<int> &prices) {
        int mp = 0;
        for (int p = 1; p < prices.size(); ++p) 
          mp += max(prices[p] - prices[p-1], 0);    
        return mp;
    }
};
