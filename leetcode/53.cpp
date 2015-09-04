#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int s = 0;
    int sum = nums[0];
    int maxs;
    for (int i = 0; i < nums.size() ; i++) {
        s += nums[i];
        sum = max(s, sum);
        if (s < 0)
            s = 0;
        //s += nums[i];

        //maxs = max(nums[i], max(s + sum, sum));
        //if (maxs != sum) {
            //s = 0;
            //sum = maxs;
        //}
        //s += nums[i];
        //if (nums[i] > sum) {
            //sum = nums[i];
        //}
        //if (s + sum > nums[i]) {
            //sum += s;
            ////cout << "nums: " << nums[i] << '\t';
            ////cout << "s: " << s << '\t' << "sum: " << sum << endl;
        //}
        //s = 0;

        cout << "nums: " << nums[i] << '\t';
        cout << "s: " << s << '\t' << "sum: " << sum << endl;
    }

    return sum;
}

int main() {
    vector<int> nums{-2, -1};
    //vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    //vector<int> nums{1,2};
    //vector<int> nums{8, -19, 5, -4, 20};
    cout << maxSubArray(nums) << endl;
    return 0;
}
