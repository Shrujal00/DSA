//Print the number of all 7’s that are in the 2d array
#include <iostream>
using namespace std;

void find7(int mat[2][3], int n, int m) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m; j++) {
            if (mat[i][j] == 7)
            {
                count++;
            }
        }
    }
    cout << "7 occurs " << count << " times";
}


int main() {
    int mat[2][3] = {{4,7,8},{8,8,7}};
    int n = 2;
    int m = 3;
    find7(mat,n,m);
    return 0;
}
