#include <iostream>

using namespace std;

int climbStairs(int n) {
    int sum = 0;
    int x = 1;
    int y = 2;

    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    for (int i = 2; i < n; i++) {
        sum = x + y;
        x = y;
        y = sum;
    }

    return sum;
    //if (n == 1 || n == 2)
        //return 1;
    //return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    cout << climbStairs(3) << endl;
    return 0;
}
