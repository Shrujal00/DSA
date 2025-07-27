#include <iostream>
using namespace std;

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