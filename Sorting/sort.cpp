#include <iostream>
using namespace std;

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

void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i-1;
        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]  = curr;
    }
}

void countingSort(int *arr, int n) {
    int freq[10000] = {0};
    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = minVal, j=0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
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
    cout << endl;
    insertionSort(arr,n);
    printArr(arr,n);
    cout << endl;
    int carr[8] = {1,4,1,3,2,4,3,7};
    countingSort(carr,8);
    printArr(carr,8);

    return 0;
}