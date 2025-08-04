#include <iostream>
using namespace std;

/*
Problem: Calculate trapped rainwater between array elements.
Input: Array representing heights of bars.
Output: Total units of water that can be trapped.
Concept: Pre-computation of left and right maximums.
*/

void TrapWater(int *height, int n) {
    int leftMax[20000];
    leftMax[0] = height[0];
    int rightMax[20000];
    rightMax[n-1] = height[n-1];
    for(int i = 0; i < n; i++) {
        leftMax[i] = max(leftMax[i-1],height[i-1]);
    }
    for (int i = n-2; i > 0; i--)
    {
        rightMax[i] = max(rightMax[i+1],height[i+1]);
    }
    int waterTrapped = 0;    
    for (int i = 0; i < n; i++)
    {
        int currentWater = min(rightMax[i], leftMax[i]) - height[i];
        if (currentWater > 0)
        {
            waterTrapped += currentWater;
        }
    }

    cout << "Water trapped = " << waterTrapped << endl;
}


int main() {
    int height[] = {4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int);
    TrapWater(height,n);
    return 0;
}