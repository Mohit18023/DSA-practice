//  Reverse an array after the index 
#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> vect,int m){
    int start = m+1;
    int end = vect.size()-1;

    while(start<end){
        swap(vect[start],vect[end]);
        start++;
        end--;
    }
    return vect;
    
}

int main(){
    vector<int> arr;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        arr.push_back(c);
    }

    int m;
    cout<<"Enter the index from which we wanna reverse: ";
    cin>>m;

    arr = reverse(arr,m);
    cout << "After reversing : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}