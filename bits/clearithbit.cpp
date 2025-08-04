#include <iostream>
using namespace std;

/*
Problem: Clear the i-th bit of a number.
Input: A number and bit position i.
Output: Number with i-th bit cleared (set to 0).
Concept: Bitwise operations with mask.
*/

int cleariBit(int num, int i) {
    int mask = ~(1 << i);
    return (mask & num);
}


int main() {
    cout << cleariBit(6,1);
}