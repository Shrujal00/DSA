#include <iostream>
using namespace std;

void reverse(int n) {
    if(n == 0) {
        return;
    }
    cout << n << endl;
    reverse(n-1);
}


int main() {
    int n = 10;
    reverse(n);    
}