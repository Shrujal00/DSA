#include <iostream>
using namespace std;


int main() {
    int arr[2][3] = {{1,2,3},{5,6,7}};
    int row = 2;
    int column = 3;

    int transpose[column][row];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
    for(int i = 0; i < column; i++) {
        for(int j = 0; j < row; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}