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


void selectionSort(int *arr, int n) {
    for (int i = 0; i < n-1; i++)
    {
        int minidx = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minidx])
            {
                minidx = j;
            }
            swap(arr[i],arr[minidx]);
        }
    }
}


int main() {
    int arr[] = {5,4,1,3,2};
    int n = 5;
    bubbleSort(arr, n);
    printArr(arr,n);
    cout << endl;
    selectionSort(arr,n);
    printArr(arr,n);
    return 0;
}