#include <iostream>
using namespace std;

/*
Problem: Count ways to tile a 2×n board with 2×1 tiles.
Input: Width n of the board.
Output: Number of ways to tile the board.
Concept: Dynamic programming recurrence relation.
*/

int tp(int n) { // 2xn
    if(n == 0 || n == 1) {
        return 1;
    }
    return (tp(n-1) + tp(n-2));
}


int main() {
    int n = 4;
    cout << tp(n) << endl;
}