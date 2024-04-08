// In this question a array is first sorted and then rotated and we have to find the pivot element of the array. Pivot element is the element which is the starting of second sorted array.

// the array will be like [ 7,9,1,4,5,6] here 1 is the pivot element.

#include<iostream>
#include<vector>

using namespace std;

int pivotIndex(vector<int> vect){
    int s = 0;
    int e = vect.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(vect[mid] < vect[mid+1] && vect[mid] < vect[mid-1]){
            return mid;
        }
        else if(vect[mid] < vect[mid+1]){
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> vect;
    int size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        vect.push_back(c);
    }

    cout<<"Pivot Element : "<<vect[pivotIndex(vect)]<<endl;
    return 0;
}