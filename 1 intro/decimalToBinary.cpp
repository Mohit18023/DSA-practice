// convert decimal number to binary

#include<iostream>
using namespace std;

int binary_number(int num){
    int binary = 0;
    int rem, i = 1;
    while(num!=0){
        rem = num%2;
        num = num/2;
        binary = binary + (rem*i);
        i = i*10;
    }
    return binary;

}

int main(){
    int num;
    cout<<"Enter the decimal number: ";
    cin>>num;

    cout<<"The binary number is: "<<binary_number(num)<<endl;
}