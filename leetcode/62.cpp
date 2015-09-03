#include <iostream>
using namespace std;
int uniquePaths(int m, int n) {
    int count = 0;
    if (m == 1 && n == 1) {
        return 1;
    }

    if (m > 1) {
        count += uniquePaths(m - 1, n);
    }

    if (n > 1) {
        count += uniquePaths(m, n -1);
    }

    return count;

}

int main() {
    cout << uniquePaths(23,12) << endl;
    return 0;
}
