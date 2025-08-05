#include <iostream>
using namespace std;

/*
Problem: Calculate the nth Fibonacci number.
Input: A non-negative integer n.
Output: The nth number in Fibonacci sequence.
Concept: Recursive relation with multiple base cases.
*/

int fibo(int n) {
    if(n == 0) {
        return 0; 
    } else if(n == 1) {
        return 1;
    } 
    return (fibo(n-1) + fibo(n-2));
}


int main() {
    cout << fibo(5);
}