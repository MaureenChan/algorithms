#include <iostream>
#include <vector>
using namespace std;

int rob(vector<int>&nums) {

    vector<int> path;
    auto len = nums.size();
    if (len == 0)
        return 0;
    int Max = 0;
    
    
    
    for (int i = 0; i < len; i++) {
        path.push_back(nums[i]);
        if (i > 1 && path[i - 2] + nums[i] > path[i]) {
            path[i] = path[i - 2] + nums[i];
        }

        if (i > 2 && path[i - 3] + nums[i] > path[i]) {
            path[i] = path[i - 3] + nums[i];
        }

        Max = max(path[i], Max);

    }
    return Max;
}

int main() {
    //vector<int> nums{4,5,1,3,7,2,6};
    vector<int> nums{2,1,1,2};
    cout << rob(nums) << endl;
    return 0;
}
