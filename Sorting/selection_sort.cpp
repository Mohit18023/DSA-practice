// Selection sort

#include<iostream>
#include<vector>

using namespace std;

int min(vector<int> vect , int s){
    int index=-1;
    int min = INT_MAX;
    for(int i = s;i<vect.size();i++){
        if(vect[i] < min){
            min = vect[i];
            index = i;
        }
    }
    //cout<<"min : "<<min<<endl;

    return index;
}

int main(){
    vector<int> vect;
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the elements od the array :"<<endl;
    for(int i =0;i<size;i++){
        int c =0;
        cin>>c;
        vect.push_back(c);
    }

    for(int i=0;i<vect.size()-1;i++){
        int minIndex = min(vect,i);
        swap(vect[i],vect[minIndex]);
    }

    cout<<"The sorted array is :"<<endl;
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }


    return 0;
}