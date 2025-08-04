/*
Problem: Generate binary strings of size N without consecutive 1s.
Input: Size N of binary string.
Output: All valid binary strings printed.
Concept: Recursive backtracking with constraints.
*/

#include <iostream>
using namespace std;


//Print Binary String of Size N without any consecutive 1s.
void binaryString( int n, int lastplace, string ans) {
    if(n == 0) {
        cout << ans << endl;
        return;
    }
    
    if(lastplace != 1) {
        binaryString(n-1, 0, ans+'0');
        binaryString(n-1, 0, ans+'1');
    } else {
        binaryString(n-1,0,ans+'0');
    }
}

int main() {
    string ans = "";
    binaryString(3, 0, ans);
}