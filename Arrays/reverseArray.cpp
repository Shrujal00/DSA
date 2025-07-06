#include <iostream>
using namespace std;

void reverseWithSpeace(int *arr, int n) {
    int copyArr[n];
    for (int i = 0; i < n; i++)
    {
        int j = n-i-1;
        copyArr[i] = arr[j];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    reverseWithSpeace(arr,n);
}