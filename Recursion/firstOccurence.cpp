#include <iostream>
#include <vector>
using namespace std;

/*
Problem: Find the first occurrence of a key in an array.
Input: An array, starting index, and target key.
Output: Index of first occurrence of the key.
Concept: Linear search using recursion.
*/

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