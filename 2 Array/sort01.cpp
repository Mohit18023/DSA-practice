#include<iostream>
using namespace std;

void sort(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
        i++;
        j--;   
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int *arr = new int[size];

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    sort(arr,size);
     
     for(int i=0;i<size;i++)
         cout<<arr[i];
}