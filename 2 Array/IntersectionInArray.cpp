// Intersection of 2 arrays 
// Conditions : Inputs are in ascending order

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> list1;
    vector<int> list2;
    vector<int> intersection;

    int size1,size2;

    cout<<"Enter the size of list 1: ";
    cin>>size1;

    cout<<"Enter the elements of the list 1 must be sorted(ascending order):"<<endl;
    for(int i=0;i<size1;i++){
        int z;
        cin>>z;
        list1.push_back(z);
    }

    cout<<"Enter the size of list 2: ";
    cin>>size2;

    cout<<"Enter the elements of list 2 must be sorted(ascending order):"<<endl;
    for(int i=0;i<size2;i++){
        int z;
        cin>>z;
        list2.push_back(z);
    }

    int i=0,j=0;
    while(i<size1 && j<size2){
        if(list1[i] == list2[j]){
            intersection.push_back(list1[i]);
            i++;
            j++;
        } else if(list1[i] < list2[j]){
            i++;
        } else{
            j++;
        }
    }

    cout<<"List 1: ";
    for(int i=0;i<size1;i++){
        cout<<list1[i]<<" ";
    }
    cout<<endl;

    cout<<"List 2: ";
    for(int i=0;i<size2;i++){
        cout<<list2[i]<<" ";
    }
    cout<<endl;

    if(intersection.empty()){
        cout<<"No Common elements!!!"<<endl;
    } else{
        cout<<"Intersection is ";
        for(int i=0;i<intersection.size();i++){
            cout<<intersection[i];
        }
    }

    
    cout<<endl;

    return 0;


}