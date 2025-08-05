#include <iostream>
using namespace std;

/*
Problem: Print numbers from n to 1 in decreasing order.
Input: A positive integer n.
Output: Numbers printed from n down to 1.
Concept: Simple recursion with decremental calls.
*/

void reverse(int n) {
    if(n == 0) {
        return;
    }
    cout << n << endl;
    reverse(n-1);
}


int main() {
    int n = 10;
    reverse(n);    
}