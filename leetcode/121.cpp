#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;
int maxProfit(vector<int>& prices);
int maxProfit(vector<int>& prices) {
    int max = prices[prices.size() - 1];
    int best = 0;
    for (auto itr = prices.rbegin(); itr != prices.rend(); itr++) {
        if (max - *itr > best) {
            best = max - *itr;
        }
        if (*itr > max)
            max = *itr;

        cout << best << endl;
    }
    return best;
}

int main() {
    vector<int> prices{4,1,2,5,6};
    //int best = prices.size();
    int best = maxProfit(prices);
    cout << best << endl;
    return 0;

}
