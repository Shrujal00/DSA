#include <iostream>
using namespace std;

int cleariBit(int num, int i) {
    int mask = ~(1 << i);
    return (mask & num);
}


int main() {
    cout << cleariBit(6,1);
}