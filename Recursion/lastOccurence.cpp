#include <iostream>
#include <vector>
using namespace std;

/*
Problem: Find the last occurrence of a key in an array.
Input: An array, target key, and starting index.
Output: Index of last occurrence of the key.
Concept: Recursive search with backtracking.
*/

int lastOccr(vector<int> nums, int key, int i) {
    if(i == nums.size()) {
        return -1;
    }
    int foundIdx = lastOccr(nums, key, i+1);
    if(foundIdx == -1 && nums[i] == key) {
        return i;
    }
    return foundIdx;
}


int main() {
    vector<int> nums = {1,2,3,3,4,4};
    int key = 3;
    cout << lastOccr(nums, key, 0);
}