// CONVERT BINARY TO DECIMAL 
// 1. Take a binary number as input.
// 2. Initialize a variable decimal to 0 and i to 0.
// 3. Run a while loop until the binary number is greater than 0.
// 4. Inside the loop, find the remainder of the binary number when divided by 10.
// 5. Multiply the remainder with 2 raised to the power of i and add it to the decimal number.
// 6. Divide the binary number by 10 and increment i by 1.
// 7. Print the decimal number.
// 8. Exit.
//

#include<iostream>
#include<cmath>
using namespace std;

int decimal_number(int num){
    int decimal = 0;
    int rem , i =1;
    while(num!=0){
        rem = num%10;
        decimal = decimal + rem*i;
        num = num/10;
        i = i*2;
    }
    return decimal;
}

int main(){
    int num;
    cout<<"Enter the binary number: ";
    cin>>num;

    cout<<"The decimal number is: "<<decimal_number(num)<<endl;
}