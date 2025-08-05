#include <iostream>
#include <vector>
using namespace std;

//Sort Array Using Quick Sort


int partition(vector<int> arr,int si,int ei) {
    int i = si-1;
    int pivot = arr[ei];
    for (int j = 0; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[ei]);
    return i;
}

void quickSort(vector<int> &arr, int si, int ei) {
    if (si >= ei)
    {
        return;
    }
    int pivotIdx = partition(arr, si, ei);
    quickSort(arr, si, pivotIdx-1);
    quickSort(arr, pivotIdx+1, ei);

    
}

int main() {
    vector<int> arr = {5,6,1,2,4};
}