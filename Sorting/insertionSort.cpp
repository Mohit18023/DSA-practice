// Insertion Sort

#include<iostream>
#include<vector>

using namespace std;

void insertionSort(vector<int> arr,int size){
    
    for(int i=1;i<size;i++){
        int key = arr[i];
        for(int j =i;j>=0;j--){
            if(arr[j-1] >key){
                arr[j] = arr[j-1];
            }
            else{
                arr[j] = key;
                break;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void printArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    vector<int> vect;

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        vect.push_back(c);
    }

    cout<<"Array is before sorting: ";
    printArray(vect);
    cout<<endl;
    insertionSort(vect,size);
    cout<< "Array after sorting: ";
    printArray(vect);

    return 0;
}