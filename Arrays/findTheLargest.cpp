#include <iostream>
using namespace std;

void findLargest(int *arr, int n) {

    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << maxi;
}


int main() {
    int arr[5] = {10,122,32,3,5};
    int n = sizeof(arr)/sizeof(int);

    findLargest(arr,n);
}