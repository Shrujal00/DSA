#include <iostream>
using namespace std;

// Get Ith bit
// num = 6 , i = 2

int getIbit(int num, int i) {
    int bitmask = 1 << i;
    if(!(bitmask & num)) {
        return 0;
    } else {
        return 1;
    }
}


int main() {
    int num = 6;
    int i = 2;
    cout << getIbit(6,2) << endl;
    cout << getIbit(7,3) << endl;
}