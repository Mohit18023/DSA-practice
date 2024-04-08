#include<iostream>

using namespace std;

void alternate_swap(int arr[],int size){
    for(int i=0;i+1<size;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}


int main(){
    
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int *array = new int[size];
    
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    alternate_swap(array,size);

    cout<<"Printing the array: ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    delete[] array;
    return 0;
}