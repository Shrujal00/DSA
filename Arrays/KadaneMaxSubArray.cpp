#include <iostream>
using namespace std;

void kadane(int *arr, int n) {
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Tha maximum subarray Sum is " << maxSum;
}


int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = 6;
    kadane(arr,n);
    return 0;
}