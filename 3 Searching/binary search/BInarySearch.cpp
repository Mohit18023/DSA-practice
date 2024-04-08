#include<iostream>
using namespace std;

void binary_Search(int arr[],int size,int key){
    int low = 0;
    int high = size-1;
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == key){
            cout<<"Element Found at "<<mid+1<<" position";
            return;
        }
        else if(arr[mid] > key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int *array = new int[size];
    cout<<"\n\nPLEASE ENTER THE ELEMENTS IN ASCENDING ORDER\n\n"<<endl;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
  
    
    binary_Search(array,size,key);
    delete[] array;
    return 0;
}