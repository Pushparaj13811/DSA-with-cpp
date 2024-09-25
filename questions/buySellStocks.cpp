#include <iostream>
#include <vector>

using namespace std;

int getMaxProfit(vector<int> prices)
{
    int maxProfit = 0;
    int minPrice = INT_MAX;
    int n = prices.size();

    if (n <= 1)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (minPrice > prices[i])
        {
            minPrice = prices[i];
        }
        int potentialProfit = prices[i] - minPrice;
        if (potentialProfit > maxProfit)
        {
            maxProfit = potentialProfit;
        }
    }
    return maxProfit;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << getMaxProfit(prices) << endl;

    return 0;
}