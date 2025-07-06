#include <iostream>
using namespace std;

void linearSearch(int *arr, int n, int key) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "The number is found at: " << i << endl ;
        }
    }
}


int main() {
    int arr[5] = {22,12,34,56,66};
    int n = 5;
    int key = 34;
    linearSearch(arr,n,key);
}
