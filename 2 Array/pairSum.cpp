#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> vect,int key){
    int low=0;
    int high=vect.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(vect[mid] == key){
            return 1;
        }else if(vect[mid] >key){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return 0;
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

    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;
    int flag=0;
    for(int i=0;i<size/2;i++){
        int key = sum-vect[i];
        if(binarySearch(vect,key)){
            cout<<"Pair found: "<<vect[i]<<" "<<key<<endl;
            flag=1;
        }
    }
    if(flag==0)
        cout<<"Pair not found!!!"<<endl;
    
    return 0;
}