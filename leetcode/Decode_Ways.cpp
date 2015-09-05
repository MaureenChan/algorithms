#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

int numDecoding(string s) {
    int len = int(s.size());
    int count = 0;
    int pre_sum = 1;
    int sum = 1;
    int two;

    if (len == 0)
        return 0;

    if (s[0] == '0') {
        return 0;
    }

    if (len == 1) {
        count = 1;
        return count;
    }

    for (int i = 1; i < len; i++) {
        two = atoi(s.substr(i - 1, 2).c_str());
        if (two > 26) {
            if (s[i] == '0')
                return 0;
            count = sum;
        } else if (two >= 10 && two <= 26) {
            if (s[i] == '0' || i + 1 < len && s[i + 1] == '0') {
                count = sum;
                cout << "i:" << i << '\t'
                    << "two: " << two << '\t'
                    << "pre_sum:" << pre_sum << '\t'
                    << "sum: " << sum << '\t'
                    << "count: " << count << '\t'
                    << endl;
                continue;
            } else {
                count = sum + pre_sum;
            }
        } else if (two < 10 && two > 0) {
            count = sum;
        } else if (two == 0){
            count = 0;
            return 0;
        }
        pre_sum = sum;
        sum = count;
        cout << "i:" << i << '\t'
            << "two: " << two << '\t'
            << "pre_sum:" << pre_sum << '\t'
            << "sum: " << sum << '\t'
            << "count: " << count << '\t'
            << endl;
    }
    return count;



}

int main() {
    cout << numDecoding("110") << endl;
    //cout << numDecoding("12") << endl;
    //cout << numDecoding("321432") << endl;
    //cout << numDecoding("012") << endl;
    //cout << numDecoding("1010") << endl;    //1
    //cout << numDecoding("10") << endl; // 1
    //cout << numDecoding("100") << endl; // 0
    //cout << numDecoding("12") << endl;
    return 0;
}
