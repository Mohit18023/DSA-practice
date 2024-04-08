#include<iostream>
using namespace std;

int minimun(int arr[],int size){
    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if (min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int maximun(int arr[],int size){
    int max = INT_MIN;
    for(int i=0; i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int size;
    int min,max;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int *array = new int[size];

   cout<<"Enter the elements of the array"<<endl;
   for(int i=0;i<size;i++){
    cin>>array[i];
   }

    min = minimun(array,size);
    max = maximun(array,size);

   cout << "MINIMUN: "<<min<<endl;
   cout << "MAXIMUM: "<<max<<endl;
   
   delete[] array;
   
   return 0;

}