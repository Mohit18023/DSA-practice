// Move all the zeros at right side and all the non-zero elements remain in same order
#include<iostream>
#include<vector>

using namespace std;

void moveZero(vector<int> &arr)
{ // Pass vector by reference
    int i = 0, j = 0;

    while (j < arr.size())
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> vect;
    int size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter the element of the array: "<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        vect.push_back(c);
    }

    moveZero(vect);
    
    return 0;
}