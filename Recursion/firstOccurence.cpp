#include <iostream>
#include <vector>
using namespace std;

int foccr(vector<int> nums, int i, int key) {
    int n = nums.size();
    if(nums[i] == key) {
        return i;
    } else {
        return foccr(nums, i+1, key);
    }
}


int main() {
    vector<int> nums = {1,2,3,3,4,4};
    int key = 4;
    cout << foccr(nums, 0, key);
    return 0;
}