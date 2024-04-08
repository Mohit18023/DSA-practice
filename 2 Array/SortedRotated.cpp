// Check if the array is sorted and rotated

#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int>& arr){
    int count = 0;
    for(int i=1;i<arr.size();i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[arr.size()-1] > arr[0]){
        count++;
    }

    return count<=1;
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

    if(check(arr)){
        cout<<"The array is sorted and rotated";
    }else{
        cout<<"the array is not sorted and rotated";
    }

    return 0;

}