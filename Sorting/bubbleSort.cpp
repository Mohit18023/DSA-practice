#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
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
    
    sort(array,size);

    cout<<"The elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    delete[] array;
    return 0;
}