#include <iostream>
using namespace std;


int main() {
    int arr[3][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},};

    int m = 3;
    int n = 4;

    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
            //use cin to take input.. then use another loop to print values.
        }
        cout << endl;
    }


}