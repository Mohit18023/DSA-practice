// Vector STL implementation

#include<iostream>
#include<vector>

using namespace std;
// vector is dynamic it can increase its size or shirnk its size
// if the vector is full and we try to push another element , then vector will create another vector of twice the size of previous one and push all the element of the first vector to another and then push the last element 
int main(){
    
    vector<int> v;
    cout<<"Capacity ->"<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    
    v.push_back(1);
    cout << "Capacity ->" << v.capacity() << endl;
    cout<<"Size -> "<<v.size()<<endl;
    v.push_back(3);
    cout << "Capacity ->" << v.capacity() << endl;
    cout<<"Size -> "<<v.size()<<endl;
    v.push_back(2);
    cout << "Capacity ->" << v.capacity() << endl;
    cout<<"Size -> "<<v.size()<<endl;
    v.push_back(8);
    cout << "Capacity ->" << v.capacity() << endl;
    cout<<"Size -> "<<v.size()<<endl;
    
    // pop out the last element
    v.pop_back();

    
    cout<<"First -> "<<v.front()<<endl;
    cout<<"Last -> "<<v.back()<<endl;
    
    cout<<"Element at 2nd index is "<<v.at(2);

    return 0;
}