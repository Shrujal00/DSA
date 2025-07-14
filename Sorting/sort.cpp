#include <iostream>
using namespace std;

//Bubble sort - Push the largest element to the end until whole array or ds is sorted

void printArr(int *arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<  " ";
    }
}


void bubbleSort(int *arr, int n){
    for(int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}





int main() {
    int arr[] = {5,4,1,3,2};
    int n = 5;
    bubbleSort(arr, n);
    printArr(arr,n);
    return 0;
}