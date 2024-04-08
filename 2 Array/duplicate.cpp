#include<iostream>

using namespace std;

int duplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size-1;i++){
        ans = ans^arr[i]^(i+1);
    }
    ans = ans ^ arr[size-1];
    return ans;
}



int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int *array = new int[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    cout << "duplicate element: " << duplicate(array, size) << endl;

    delete[] array;
    return 0;
}