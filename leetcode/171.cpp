#include <iostream>
#include <string>
using namespace std;
int main() {
    int i;
    int num = 0;
    int m = 1;
    string s = "AB";
    for (i = s.size() - 1; i >= 0; i--) {
        num += (s[i] - 64) * m;
        m *= 26;
        cout << num <<endl;
        cout << m << endl;
    }
    cout << num << endl;
    return 0;
}
