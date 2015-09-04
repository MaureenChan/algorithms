#include <iostream>
#include <vector>

using namespace std;

int numTrees(int n) {
    vector<int> paths;
    paths.push_back(1);
    paths.push_back(1);
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            sum += (paths[i - 1 - j] * paths[j]);
        }
        paths.push_back(sum);
        sum = 0;
    }
    for (int i = 0; i < paths.size(); i++) {
        cout << paths[i] << endl;
    }
    

    return paths[n];
}


int main() {
    cout << numTrees(4) << endl;
    return 0;
}
