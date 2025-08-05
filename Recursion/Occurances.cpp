#include <iostream>
using namespace std;

/*
Problem: Find all occurrences of a key in an array.
Input: An array, target key, current index, and size.
Output: All indices where the key occurs.
Concept: Recursive traversal with condition checking.
*/

void findAllOccurrences(int arr[], int key, int i, int n) {
    if(i == n) return;

    if(arr[i] == key) {
        cout << i << " ";
    }

    findAllOccurrences(arr, key, i  + 1, n);
}

int main() {
    int arr[] = {3, 2, 4, 5, 6, 7, 2, 2};
    int n = 8;
    int key = 2;

    cout << "Indices where key occurs: ";
    findAllOccurrences(arr, key, 0, n);
    cout << endl;
}
