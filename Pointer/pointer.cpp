#include<iostream>
using namespace std;

// SYMBOL TABLE :==> Symbol table is an important data structure created and maintained by the compiler in order to keep track of semantics of variables i.e., it stores information about the scope and binding information about names, information about instances of various entities such as variable and function names, classes, objects, etc.

// symbol table maps the variable name with the address where the content is stored, so that we can print the content using variable name

// & -> is called address operator
// we use pointer to store the address of a variable


// suppose we have a array of size 10 which is initialised with 0
// int arr[10] = { 0 }
// arr ==> represents the address of the first block i.e., arr[0] 
// if we wanna access the third element , there is 2 ways to do that
// first is ==>  arr[2];
// second is *( arr+2 )  which means derefrence the address ( arr + 2 ) => arr represents the address of the first block of the array and arrays are the continous memory allocation so when we add 2 , it gives us address of third block , when derefrencing we get the value at the third position of the array 
// this is how arr[i] works under the hood
// arr[i] = *( arr + i ) 
// if we look at that 
// i[arr] = *( i + arr )  <== we can use this to get the value of a index in a array


int main(){
    int num = 5;
    int *p = &num;
    
    cout<<"The number using variable name: "<<num<<endl;
    cout<<"The address where the number is stored: "<<p<<endl;
    cout<<"The address where the pointer data is stored: "<<&p<<endl;
    cout<<"The number using the pointer: "<<*p<<endl;

    cout<<"Size of integer is: "<<sizeof(num)<<endl;

    //pointer size is 8 for all types of pointer namely pointer to integer , pointer to double
    cout<<"Size of pointer is: "<<sizeof(p)<<endl;


    return 0;

}



// Diffreneces    POINTER / ARRAYS :---

// 1. Size:
//     ----> arr -> No. of blocks * ( size of data type ) 
// 2. &(address operator):
//     ----> &a and &p have diffrent values
// 3. Symbol table :
//     ----> Content of symbol table cannot be changed
//     ----> int arr[10];
//     ----> arr = arr + 1  ===> will throw an error
//     ----> but we can do that with an pointer 
//     ----> int *ptr = arr;
//     ----> ptr = ptr + 1;  ===> will not throw an error
// 4. Pointer for character table: 
//     the name of the array gives the address of the starting point
//     int arr[10] ;
//     ----> arr => gives the starting address of the array
//     we can print it by cout<<arr;
//     but in case character array it works differently 
//     char ch[5] = "abcde";
//     ----> now if we do cout<<ch;
//     ----> it will print => abcde
//     ----> it does not give us the address of  starting character
//     ----> same happen when we assign pointer
//     ----> char *c = &ch;
//     ----> cout<<c; => it'll print value of ch rather than address