#include <iostream>
using namespace std;

/*
Problem: Calculate sum of first n natural numbers.
Input: A positive integer n.
Output: Sum of numbers from 1 to n.
Concept: Recursive summation with base case.
*/

int sum(int n) {
    if(n == 1) {
        return 1;
    }
    return n + sum(n-1);
}


int main() {
    cout << sum(5);
}