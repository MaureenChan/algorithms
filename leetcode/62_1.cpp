#include <iostream>
#include <vector>
using namespace std;
int uniquePaths(int m, int n) {
    vector<vector<int>> paths(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if (i == 0 || j == 0) 
                paths[i][j] = 1;
            else 
                paths[i][j] = paths[i - 1][j] + paths[i][j - 1];

            cout << paths[i][j] << '\t';

        }

        cout << endl;
    }
    return paths[m - 1][n - 1];
}

int main() {
    cout << uniquePaths(23, 12) << endl;
    return 0;
}
