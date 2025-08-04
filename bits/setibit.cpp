#include <iostream>
using namespace std;

/*
Problem: Set the i-th bit of a number.
Input: A number and bit position i.
Output: Number with i-th bit set to 1.
Concept: Bitwise operations with bitmask.
*/

int setIthbit(int num, int i) {
    int bitmask = 1 << i;
    return (bitmask | num);
}


int main() {
    cout << setIthbit(6,3);
}