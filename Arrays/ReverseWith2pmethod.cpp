/*
Problem: Reverse an array in-place using two pointers.
Input: An array of integers and its size.
Output: The array reversed in-place.
Concept: Two pointer technique for array reversal.
*/

#include <iostream>
using namespace std;

void reverseWith2p(int *arr, int n){
    int st = 0;
    int end = n-1;
    
    while (st < end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    reverseWith2p(arr,n);
}