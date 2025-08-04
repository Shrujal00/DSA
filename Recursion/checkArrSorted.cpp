#include <iostream>
using namespace std;

/*
Problem: Check if an array is sorted in ascending order.
Input: An array and its size.
Output: Boolean indicating if array is sorted.
Concept: Recursive array traversal and comparison.
*/

bool arrIsSorted(int arr[], int n, int i) {
    
    if(i == n-1) {
        return true;
    }
    
    if(arr[i] > arr[i+1]) {
        return false;
    }
    return arrIsSorted(arr, n, i+1);
}


int main() {
   int arr[] = {1,2,3,4,5};

   cout  << arrIsSorted(arr, 5, 0);
   return 0;
}