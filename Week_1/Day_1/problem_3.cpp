#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;
        int bestBuy = prices[0];

        for (int i = 1; i < prices.size(); i++) {

            if(bestBuy < prices[i]) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }

            bestBuy = min(bestBuy, prices[i]);
        }

        return maxProfit;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    Solution obj;
    int ans = obj.maxProfit(prices);

    cout << ans;
    return 0;
}