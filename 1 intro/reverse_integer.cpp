// 7. REVERSE INTEGER

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

#include<iostream>
using namespace std;
int reverse(int x)
{
    int reverse = 0;
    while (x != 0)
    {
        if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
            return 0;
        reverse = reverse * 10 + x % 10;
        x = x / 10;
    }
    return reverse;
}

int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    cout<<"Reverse of "<<x<<" is "<<reverse(x)<<endl;
}