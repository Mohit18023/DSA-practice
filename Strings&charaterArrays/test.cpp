// Character Arrays and Strings

#include<iostream>
using namespace std;

// strings in C++ -> 1 dimensional char Array
// ________________________________________
// | a | b  |  c  |  d  |  e  |   f |  \0  |
// -----------------------------------------
//  -------------->
// \0 => null character
// cin stops execution when space,tab,newline is given

int main(){

    // Character Array
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Name : "<<name;

    return 0;
}