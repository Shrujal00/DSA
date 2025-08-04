// Search a key in a Data Structure Using Binary Search Algorithm

#include <iostream>
using namespace std;

void binarySearch(int *arr, int n, int key) {
    int st = 0;
    int end = n-1;

    while(st <= end) {
        int mid = (st+end)/2;
        if (arr[mid] == key)
        {
            cout << "Number found at " << mid;
            break;
        }
        else if(arr[mid] > key) {
            end = mid-1;
        }
        else if(arr[mid] < key) {
            st = mid+1;
        }
        else {
            cout << "Key not found";
        }
    }

}

int main() {
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    int key = 12;
    binarySearch(arr,n,key);
    return 0;
}