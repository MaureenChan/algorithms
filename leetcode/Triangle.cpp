#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int mininumTotal(vector<vector<int>>& triangle) {
    auto x = triangle.size();
    auto y = triangle[x - 1].size();
    vector<vector<int>> paths(x, vector<int>(y));

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            paths[i][j] = INT_MAX;
            cout << paths[i][j] ;
        }
        cout << endl;
    }

    paths[0][0] = triangle[0][0];

    for (int i = 0; i < x - 1; i++) {
        for (int j = 0; j < triangle[i].size(); j++) {
            if (paths[i][j] + triangle[i + 1][j] < paths[i + 1][j]) {
                paths[i + 1][j] = paths[i][j] + triangle[i + 1][j];
            }

            if (paths[i][j] + triangle[i + 1][j + 1] < paths[i + 1][j + 1]){
                paths[i + 1][j + 1] = paths[i][j] + triangle[i + 1][j + 1];
            }
            cout << paths[i][j] << '\t';
        }
        cout << endl;
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << paths[i][j] << '\t';
        }
        cout << endl;
    }

    int Min = paths[x - 1][0];
    for (int j = 1; j < y; j++) {
        Min = min(Min, paths[x - 1][j]);
        cout << "Min: " << Min << '\t'
            << "paths[i]: " << paths[x - 1][j] << endl;
    }
    return Min;
}

int main() {
    vector<vector<int>> triangle{{2}, {3,4}, {6,5,7}, {4,1,8,3}};
    cout << mininumTotal(triangle) << endl;
    return 0;
}
