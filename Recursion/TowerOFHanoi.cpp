#include <iostream>
#include <vector>
using namespace std;

void toh(int n, string source,string helper, string destination) {
    if (n == 0) {
        // Base case: no disks to move
        cout << "No disks to move." << endl;
        return;
    }
    if (n == 1) {
        cout << "Transfer disk: " << n << " from " << source << " to " << destination << endl;
        return;
    }
    

    toh(n-1, source, destination, helper);
    cout << "Transfer disk: " << n << " from " << source << " to " << destination << endl;
    toh(n-1, helper, source, destination);

    // The above function implements the Tower of Hanoi algorithm recursively.
}



int main() {
    int n = 4;
    toh(n, "S", "H", "D");
    
    return 0;
}