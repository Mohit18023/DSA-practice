// FIND UNQIUE ELEMENT IN AN ARRAY WHERE ALL ELEMENTS EXCEPT ONE ARE PRESENT TWICE
// size of array is always in form 2m+1 , where m is a natural number
// m elements are present twice and one element is present once
// SOLUTION: XOR ALL THE ELEMENTS OF THE ARRAY, THE RESULT WILL BE THE UNIQUE ELEMENT
// WHY? BECAUSE XOR OF TWO SAME ELEMENTS IS ZERO
// XOR OF ZERO AND ANY NUMBER IS THAT NUMBER
// XOR IS COMMUTATIVE
// XOR OF TWO DIFFERENT NUMBERS IS NOT ZERO
// XOR OF TWO DIFFERENT NUMBERS IS NOT SAME AS EITHER OF THE NUMBERS
// XOR OF TWO DIFFERENT NUMBERS IS SAME AS XOR OF THE NUMBERS IN DIFFERENT ORDER


#include<iostream>

using namespace std;

int findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int *array = new int[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    cout<<"The unique element is: "<<findUnique(array,size)<<endl;

    delete[] array;
    return 0;

}