// deque refers to the the double ended queue
// we can perform push pop operation on both the ends

#include<iostream>
#include<deque>

using namespace std;

int main(){
    // creating double ended queue
    deque<int> d;

    // push element in deque
    d.push_back(1);
    d.push_front(0);

    // printing element 
    for(int i:d){
        cout<<i<<" ";
    }

    // pop elements from the deque
    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    d.pop_back();


    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    // Printing element on a particular index
    cout<<"Print element on First Index: "<<d.at(1)<<endl;

    // printing last element 
    cout<<"Print element on last Index: "<<d.back()<<endl;

    // Printing first element
    cout<<"Print first elemet: "<<d.front()<<endl;


    cout<<"Empty or not: "<<d.empty()<<endl;

    // erasing the elements
    cout<<"Before erase: "<<d.size()<<endl;
    // to erase we need to give a range
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase: "<<d.size()<<endl;


    return 0;
    

}