#include <iostream>
using namespace std;

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