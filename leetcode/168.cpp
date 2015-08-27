#include <iostream>
#include <string>
using namespace std;
int main() {
    int n = 26;
    int m = n;
    int count = 0;
    string c;
    string s;
    while (m) {
        count++;
        m /= 26;
    }
    count--;
    if (n / 26 == 1) {
        return s = char(m + 64) + s;
    }
    while (n) {
        m = n % 26; 
        n = n / 26;
        s = char(m + 64) + s;
    }
    cout << s << endl;
    return 0;
}
