#include <iostream>
using namespace std;
//Using O(n)
// int Power(int x, int n) {
//     if(n == 0) {
//         return 1;
//     }
//     return (2*Power(x, n-1));
// }


//Using O(logn)

int Power(int x, int n) {
    if(n == 0) {
        return 1;
    }
    int halfPower = (Power(x,n/2));
    int halfPowerSquare = halfPower*halfPower;
    if (n%2 != 0)
    {
        return x * halfPowerSquare;
    }
    
    return halfPowerSquare;
}

int main() {
    int x = 2;
    int n = 3;
    cout << Power(x,n);
}
