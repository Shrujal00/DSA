#include <iostream>
using namespace std;


void sorting(char *arr, int n){
    for (int i = 1; i < n; i++)
    {
        int curr = i;
        int prev = i-1;
        while (prev >= 0 && arr[prev] > arr[curr])
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev] = curr;
    }
    
}


int main() {
    char ch[] = {'f','b','a','e','c','d'};
    int n = 6;
    sorting(ch,n);
    for (int i = 0; i < n; i++)
    {
        cout << ch[i] << " ";
    }
    
    return 0;
}