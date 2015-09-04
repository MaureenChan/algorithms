#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int>& nums) {
    int s = 1;
    int sum = nums[0];
    int Max = 1;
    int Min = 1;
    int tmp;
    for (int i = 0; i < nums.size(); i++) {
        Max *= nums[i];
        Min *= nums[i];

        sum = max(sum, max(Max, Min));

        if (Max < Min) {
            tmp = Min;
            Min = Max;
            Max =tmp;

        }
        if (Max < 1) {
            Max = 1;
        }

        if (Min > -1) {
            Min = 1;
        }

        //s *= nums[i];
        //maxs = max(s, max(nums[i], sum));
        //if (maxs != sum) {
            //sum = maxs;
        //}
        cout << "sum: " << sum << '\t'
            << "Max: " << Max << '\t'
            << "Min: " << Min << '\t'
            << "nums[i]: " << nums[i] << endl;
        //if (s == 0) {
            //s = 1;
            //continue;
        //}
    }

    return sum;
}

int main() {
    //vector<int> nums{2,3,-2,4};
    //vector<int> nums{6,3,-10,0,1};
    //vector<int> nums{3,-1,4};
    //vector<int> nums{-2, 0, -1};    // 0
    vector<int> nums{2,-5,-2,-4,3}; //24
    //vector<int> nums{-4, -3};
    //vector<int> nums{-2, 3, -4};
    cout << maxProduct(nums) << endl;
    return 0;
}
