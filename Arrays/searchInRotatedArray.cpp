#include <iostream>
#include <vector>
using namespace std;

/*
Problem: Search for a target element in a rotated sorted array.
Input: A rotated sorted array and a target key.
Output: Index of the key if found.
Concept: Modified binary search for rotated arrays.
*/

void searchInRotated(int *arr, int n, int key) {
    int st = 0;
    int end = n-1;
    while(st <= end) {
        int mid = st + end-st/2;
        if (arr[mid] == key)
        {
            cout << "key found at: " << mid;
        }
        
        if (arr[mid] >= arr[st])
        {
            if (arr[st] <= key && key <= arr[mid])
            {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        else {
            if(arr[mid] <= key && key <= arr[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
}

int main() {
    int arr[8] = {4,5,6,7,0,1,2,3};
    int key = 3;
    int n = 8;
    searchInRotated(arr, n, key);
}