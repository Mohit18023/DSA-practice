// In this we will search in sorted rotated array
// For this we will first find the pivot element and check where we wanna apply binary search

#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int> vect)
{
    int s = 0;
    int e = vect.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (vect[mid] < vect[mid + 1] && vect[mid] < vect[mid - 1])
        {
            return mid;
        }
        else if (vect[mid] < vect[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int binarySearch(vector<int> vect, int start,int end, int key){
    int s = start;
    int e = end;
    int mid = s + ( e - s )/2;
    while(s<=e){
        if(vect[mid] == key){
            return mid;
        } else if( vect[mid] > key){
            s = mid+1;
        } else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}


int main(){
    vector<int> vect;
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        int c;
        cin>>c;
        vect.push_back(c);
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;

    int pivot = pivotIndex(vect);
    //cout<<"Pivot Index : "<<pivot<<endl;
    int index ;
    if (key>vect[pivot] && key < vect[size-1]){
        index = binarySearch(vect,pivot,size-1,key);
    } else if( key > vect[0] && key < vect[pivot -1]){
        index = binarySearch(vect,0,pivot-1,key);

    } else{
        cout<<"Key not found!!!";
        return 0;
    }
    //cout<<"Index: "<<index<<endl;

    cout<<"The key is found at "<<index+1;

    return 0;
}