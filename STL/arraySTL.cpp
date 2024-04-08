#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int, 4> a ={2,3,4,5};
    cout<<"The size of the array is: "<<a.size()<<endl;

    // printing the array
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // Finding first and last element 
    cout<<"The first element is "<<a.front()<<endl;
    cout<<"The last element is "<<a.back()<<endl;

    // Check if the array is empty
    cout<<"Is the array empty "<<a.empty()<<endl;

    // finding element at a particular index
    cout<<"The element at 2nd position is "<<a.at(1)<<endl;

    return 0;
}