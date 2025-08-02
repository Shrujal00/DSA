#include <iostream>
using namespace std;

int binSearchUsingRecursion(int arr[], int key, int st, int end) {
    if(st > end) {
        return -1;
    }
    
    int mid = st + (end - st) / 2;

    if(arr[mid] == key) {
        return mid;
    } else if(arr[mid] > key) {
        return binSearchUsingRecursion(arr, key, st, mid - 1);
    } else {
        return binSearchUsingRecursion(arr, key, mid + 1, end);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int key = 5;

    int index = binSearchUsingRecursion(arr, key, 0, n - 1);
    
    if(index != -1) {
        cout << "Key found at index: " << index << endl;
    } else {
        cout << "Key not found." << endl;
    }
}
