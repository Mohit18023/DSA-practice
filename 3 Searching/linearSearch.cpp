#include<iostream>
using namespace std;

void linearSearch(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            cout<<"Element Found at "<<i+1<<" position";
            return;
        }
    }
    cout<<"Element Not Found!!!";
    
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

    int key;
    cout<<"Enter the key: ";
    cin>>key;


    linearSearch(array,size,key);

    delete[] array;
    return 0;

}