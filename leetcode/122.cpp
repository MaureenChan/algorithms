#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;
int maxProfit(vector<int>& prices);
int maxProfit(vector<int>& prices) {
    if (prices.empty())
        return 0;
    int best = 0;
    for (auto itr = prices.begin() + 1; itr != prices.end(); itr++) {
        if (*itr > *(itr - 1)) {
            cout << *itr << '\t' << *(itr - 1) << '\n' << endl;
            best += (*itr - *(itr - 1));
        }
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
