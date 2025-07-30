#include <iostream>
using namespace std;


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