#include <iostream>
#include <vector>
using namespace std;
int uniquePaths(vector<vector<int>>& obstacleGrid) {
    auto m = obstacleGrid.size();
    auto n = obstacleGrid[0].size();

    vector<vector<int>> paths(m, vector<int>(n));
    if (obstacleGrid[0][0]) {
        return 0;
    } else {
        paths[0][0] = 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (obstacleGrid[i][j] == 1) {
                paths[i][j] = 0;
                cout << paths[i][j] << '\t';
                continue;
            } else {
                if (i == 0 && j == 0) 
                    continue;
                if (i == 0)
                    paths[i][j] = paths[i][j - 1];
                else if (j == 0) 
                    paths[i][j] = paths[i -1][j];
                else
                    paths[i][j] = paths[i - 1][j] + paths[i][j - 1];

                cout << paths[i][j] << '\t';
            }


        }

        cout << endl;
    }
    return paths[m - 1][n - 1];
}

int main() {
    vector<vector<int>> obstacleGrid{{0,0,0}, {0,1,0}, {0,0,0}};
    cout << uniquePaths(obstacleGrid);
    return 0;
}
