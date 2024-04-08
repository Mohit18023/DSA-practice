// Rotate the array

#include<iostream>
#include<vector>

using namespace std;

void rotate1(vector<int> arr,int m){
    int j=0;
    while(j<m){
        int last = arr[arr.size()-1];
        for(int i=arr.size()-1-1;i>=0;i--){
            arr[i+1] = arr[i];
        }
        arr[0] = last;
        j++;
    }

    cout << "After rotating: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }  
}

void rotate(vector<int>& arr,int m){
    vector<int> temp(arr.size());

    for(int i=0;i<arr.size();i++){
        temp[(i+m)%arr.size()] = arr[i];
    }
    //copy the items in arr
    arr = temp;
}


int main(){
    vector<int> arr;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        arr.push_back(c);
    }
    int m;
    cout<<"How many time do you want to rotate the array: ";
    cin>> m;

    rotate(arr,m);

    cout << "After rotating: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}