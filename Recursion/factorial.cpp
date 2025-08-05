#include <iostream>
using namespace std;

/*
Problem: Calculate factorial of a number.
Input: A non-negative integer n.
Output: Factorial of n (n!).
Concept: Basic recursion with base case.
*/

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    return n * fact(n-1);
}

int main() {
    cout << fact(5);
}