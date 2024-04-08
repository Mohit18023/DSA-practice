// find triplet with given sum in an array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    vector<int> vect;

    cout<<"Enter the size of array: ";
    cin>>size;;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        vect.push_back(c);
    }
    int key;
    cout<<"Enter the sum: ";
    cin>>key;

    

    return 0;
}