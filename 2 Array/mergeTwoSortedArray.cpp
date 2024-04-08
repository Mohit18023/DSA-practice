// Merge two sorted array

#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> arr1,vector<int> arr2,int size1,int size2){
    vector<int> final;
    int i=0;
    int j=0;

    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            final.push_back(arr1[i]);
            cout<<arr1[i]<<" is added to the array"<<endl;
            i++;
        }else{
            final.push_back(arr2[j]);
            cout << arr2[j] << " is added to the array" << endl;
            j++;
        }
    }

    while(i<size1){
        final.push_back(arr1[i]);
        cout << arr1[i] << " is added to the array" << endl;
        i++;
    }
    while(j<size2){
        final.push_back(arr2[j]);
        cout << arr2[j] << " is added to the array" << endl;
        j++;
    }
    
    return final;

}

int main(){
    vector<int> arr1;
    vector<int> arr2;

    int size1,size2;
    cout<<"Enter the size of first Array: ";
    cin>>size1;

    cout<<"Enter the element of first Array: "<<endl;
    for(int i=0;i<size1;i++){
        int c;
        cin>>c;
        arr1.push_back(c);
    }
    cout<<"Enter the size of second Array: ";
    cin>>size2;

    cout<<"Enter the element of second Array: "<<endl;
    for(int i=0;i<size2;i++){
        int c;
        cin>>c;
        arr2.push_back(c);
    }

    vector<int> final(merge(arr1,arr2,size1,size2));

    cout<<"After merging two sorted array: "<<endl;
    for(int i=0;i<final.size();i++){
        cout<<final[i]<<" ";
    }

    return 0;

}