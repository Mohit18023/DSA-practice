// Reverse a given string

#include<iostream>
using namespace std;
int length(string str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

string reverse(string str){
    int e = length(str) -1;
    int s = 0;

    while(s<=e){
        swap(str[s],str[e]);
        s++;
        e--;
    }

    return str;
}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    
    str = reverse(str);

    cout<<"After revesing: ";
    cout<<str;

}