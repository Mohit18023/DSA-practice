#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    for(int i=0;i<=size/2;i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int *array = new int[size];

    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    reverseArray(array,size);
    cout<<"After reversing the array"<<endl;

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    delete[] array;
    return 0;

}
