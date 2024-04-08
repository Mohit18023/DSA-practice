#include<iostream>

using namespace std;

int findsum(int arr[],int size){
    int sum=0;
    for(int i =0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}


int main(){
    int size;
    int sum;
    cout<<"Enter the size of array: ";
    cin>>size;

    int *array = new int[size];
    
    cout<<"Enter the elements of the array:"<<endl;

    for(int i =0;i<size;i++){
        cin>>array[i];
    }

    sum = findsum(array,size);

    cout<<"The sum is "<<sum<<endl;


    delete[] array;
    return 0;
}