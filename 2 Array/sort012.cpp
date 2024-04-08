// sort 0 1 2 is a problem in which we sort an array which contains only 0 1 2 

#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int> &vect){
    int low=0;
    int mid=0;
    int high=vect.size()-1;
    while(mid<=high){
        if(vect[mid] == 0){
            swap(vect[low],vect[mid]);
            low++;
            mid++;
        } else if(vect[mid] == 1){
            mid++;
        } else{
            swap(vect[mid],vect[high]);
            high--;
        }
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

    sort012(vect);

    cout<<"Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<vect[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}