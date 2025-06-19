int maxProfit(vector<int>& prices) {
        int maxProfit = 0, profit = 0;
        int mini = INT_MAX;
        for(int i =0; i<prices.size(); i++){
            mini = min(mini,prices[i]);
            profit = prices[i] - mini;
            maxProfit = max(maxProfit,profit);
        }
        return maxProfit;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
