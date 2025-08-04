//LeetCode 53
//https://leetcode.com/problems/maximum-subarray/
/*Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.

Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

 

Constraints:

    1 <= nums.length <= 105
    -104 <= nums[i] <= 104

 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.*/

#include <iostream>
using namespace std;

void kadane(int *arr, int n) {
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Tha maximum subarray Sum is " << maxSum;
}


int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = 6;
    kadane(arr,n);
    return 0;
}