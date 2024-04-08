// 231. Power of Two
// Easy
// Given an integer, write a function to determine if it is a power of two.
// 
// Example 1:
//
// Input: 1
// Output: true
// Explanation: 20 = 1
// Example 2:
//
// Input: 16
// Output: true
// Explanation: 24 = 16
// Example 3:
//
// Input: 218
// Output: false
//
// Constraints:
//
// -231 <= n <= 231 - 1
// Follow up: Could you solve it in O(1) time complexity?


#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The number is " << (isPowerOfTwo(n) ? "" : "not ") << "a power of 2" << endl;
}