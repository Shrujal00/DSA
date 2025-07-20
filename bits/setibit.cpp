#include <iostream>
using namespace std;

int setIthbit(int num, int i) {
    int bitmask = 1 << i;
    return (bitmask | num);
}


int main() {
    cout << setIthbit(6,3);
}