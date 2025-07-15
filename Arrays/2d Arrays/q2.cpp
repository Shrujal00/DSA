// Print out the sum of the numbers in the second row of the “nums” array.
#include <iostream>
using namespace std;

int sumOf2ndRow(int mat[][3], int n, int m) {
    int sum =0;
    for(int j = 0; j < m; j++) {
        sum += mat[1][j];
    }
    return sum;
}



int main()
{
int mat[3][3] = {{1,4,9},
                 {11,4,3},
                 {2,2,3}};
cout << sumOf2ndRow(mat,3,3);
return 0;
}