// find length of given string

#include<iostream>

using namespace std;

int length(string str){
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main(){
    string name;
    cout<<"Enter name: ";
    cin>>name;

    

    cout<<"The length of the string is "<<length(name)<<endl;

    return 0;
}