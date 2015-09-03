#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;
int maxProfit(vector<int>& prices);
int maxProfit(vector<int>& prices) {
    
    if (prices.empty())
        return 0;

    auto len = prices.size();

    vector<int> profits(len);
    int min = prices[0];
    for (auto itr = prices.begin() + 1, itm = profits.begin() + 1; 
         itr != prices.end(); 
         itr++, itm++) {
        *itm = (*(itm - 1) > (*itr - min)) ? *(itm - 1) : (*itr - min);
        if (*itr < min)
            min = *itr;
        cout << *itr << '\t' << *itm << endl;
    }
    int best = 0;
    for (auto itr = profits.begin(); itr != profits.end(); itr++) {
        if (*itr > best) {
            best = *itr;
        }
        cout << "itr: " << *itr << endl;
    }

    int max = prices[prices.size() - 1];
    int sum = 0;
    for (auto itr = prices.rbegin() + 1, itm = profits.rbegin() + 1;
            itr != prices.rend();
            itr++, itm++) {
        if (max - *itr > sum) {
            sum = max - *itr;
        }

        if (*itr > max) {
            max = *itr;
        }

        *itm += sum;
        cout << "max: " << max << '\t' << "sum: " << sum << endl;
        cout << *itr << '\t' << *itm << endl;
        
        
    }

    best = 0;
    for (auto itr = profits.begin(); itr != profits.end(); itr++) {
        if (*itr > best) {
            best = *itr;
        }
        cout << "itr: " << *itr << endl;
    }
    return best;
}

int main() {
    //vector<int> prices{4,1,2,5,6};
    //vector<int> prices{2,1};
    vector<int> prices{1,2};
    //int best = prices.size();
    int best = maxProfit(prices);
    cout << "best: " << best << endl;
    return 0;

}
